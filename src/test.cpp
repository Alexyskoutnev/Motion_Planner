#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main( int argc, char** argv )
{   
   //read input image as gray
   Mat image_gray = imread("input.jpg", CV_LOAD_IMAGE_GRAYSCALE);   

   // convert gray image to binary image 
   // After threshold, all values are either (0 or 200)
   Mat imgage_bw;
   cv::threshold(image_gray, imgage_bw, 200, 255.0, THRESH_BINARY);

   // if you really want images with 0 for blocked cell and 1 for free cell
    Mat image_grid = imgage_bw/255;  

    // save to disk
    imwrite("output.pgm", image_grid);

    //write result to text file
    FileStorage file("ouput.yaml", cv::FileStorage::WRITE);    
    file <<"grid " <<image_grid;
    file.release(); 

    return 0;
}