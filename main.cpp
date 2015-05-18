#include <opencv/cv.hpp>
#include <opencv/highgui.h>
using namespace cv;
int main()
{
Mat imagen;

VideoCapture cap;
    cap.open(0);

    namedWindow("window",1);

    while(1){
    cap>>imagen;

    imshow("window",imagen);
    waitKey(33);

    }

    return 0;
}
