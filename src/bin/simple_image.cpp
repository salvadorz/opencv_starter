#include <iostream>

#include <opencv2/opencv.hpp>

using namespace cv;

int main( int argc, char** argv )
{
    std::cout << "Hello Lenna" << std::endl;
    std::string img = "../../img/lenna.jpg";
    Mat srcImage = imread(img);
    if (!srcImage.data) {
        return EXIT_FAILURE;
    }
    namedWindow("Lenna Image", WINDOW_AUTOSIZE);
    imshow("Lenna Image", srcImage);
    waitKey(0);

    return 0;
}