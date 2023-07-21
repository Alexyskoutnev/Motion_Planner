#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

// using namespace cv;
using namespace std;

int main( int argc, char** argv )
{   
   //read input image as gray
   std::string image_path = cv::samples::findFile("./data/in/map.jpeg");
   cv::Mat image_gray = cv::imread(image_path, cv::COLOR_BGR2GRAY);





   // convert gray image to binary image 
   // After threshold, all values are either (0 or 200)
   cv::Mat imgage_bw;
   cv::threshold(image_gray, imgage_bw, 200, 255.0, cv::THRESH_BINARY);

   // if you really want images with 0 for blocked cell and 1 for free cell
    cv::Mat image_grid = imgage_bw/255;  

    // save to disk
    cv::imwrite("./data/out/output.pgm", image_grid);

    //write result to text file
    cv::FileStorage file("./data/out/ouput.yaml", cv::FileStorage::WRITE);    
    file <<"grid " <<image_grid;
    file.release(); 

    return 0;
}