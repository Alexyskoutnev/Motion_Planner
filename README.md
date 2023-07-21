# Motion_Planner
Motion planner that reads in image maps and computes the optimal trajectory towards the goal from the starting location. The algorithm uses a A* search to find the trajectory path. 

# External Dependencies
- opencv

# Installing opencv (M1 Mac)
```
1. brew install cmake
2. mkdir thirdparty && cd thirdparty
3. git clone https://github.com/opencv/opencv.git && cd opencv
4. mkdir build && cd build
5. cmake ..
6. arch -arm64 cmake ../opencv/ -DWITH_QT=OFF -DWITH_OPENGL=OFF -DFORCE_VTK=OFF -DWITH_TBB=OFF -DWITH_GDAL=OFF -DWITH_XINE=OFF -DBUILD_EXAMPLES=OFF -DBUILD_ZLIB=OFF -DBUILD_TESTS=OFF .
7. arch -arm64 sudo make -j 8
8. arch -arm64 sudo make install
```