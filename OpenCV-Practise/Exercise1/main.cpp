#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include <stdint.h>
#include <math.h>
#define PI 3.141592654

void MyLine( cv::Mat img, cv::Point start, cv::Point end);
void mouseHandler(int event, int x, int y, int, void*);
cv::Point point;
cv::Mat mySunFlower = cv::imread("../lol.jpg", cv::IMREAD_UNCHANGED);
void CircleInTheMiddle(cv::Mat image, cv::Point center);
double getAngle();

int A;
int B;

int main() {

    namedWindow("Color", cv::WINDOW_FREERATIO);

    cv::resizeWindow("Color", mySunFlower.cols, mySunFlower.rows);

    MyLine(mySunFlower, cv::Point(mySunFlower.cols/2, mySunFlower.rows/2), cv::Point(mySunFlower.cols, mySunFlower.rows/2));
    CircleInTheMiddle(mySunFlower, cv::Point(mySunFlower.cols/2, mySunFlower.rows/2));
    cv::setMouseCallback( "Color", mouseHandler, 0 );

    cv::imshow("Color", mySunFlower);

    cv::waitKey();

    return 0;
}

void CircleInTheMiddle(cv::Mat image, cv::Point center)
{
    cv::circle(image, center, 400/32, cv::Scalar(0, 0, 255), 2, cv::LINE_8);
}

void MyLine( cv::Mat img, cv::Point start, cv::Point end)
{
int thickness = 2;
int lineType = cv::LINE_8;
cv::line( img, start, end, cv::Scalar( 0, 0, 0 ), thickness, lineType);
}

void mouseHandler(int event, int x, int y, int, void*)
{
    if(event == cv::EVENT_LBUTTONDOWN )
    {
        point = cv::Point(x, y);
        std::cout << "Clicked points: " << point.x << ", " << point.y << std::endl;

        A = x;
        B = y;

        cv::line(mySunFlower, point, cv::Point(mySunFlower.cols/2, mySunFlower.rows/2), cv::Scalar(0,0,255), 2, cv::LINE_8);  //RED
        cv::line(mySunFlower, point, cv::Point(point.x, mySunFlower.rows/2), cv::Scalar(255,0,0), 2, cv::LINE_8);   //BLUE
        getAngle();

        cv::imshow("Color", mySunFlower);

    }
}

double getAngle()
{
    double myAngle = 0;
    double side1 = (((double) mySunFlower.cols / 2) - ((double)mySunFlower.cols - A));
    double side2 = ((double)mySunFlower.rows / 2) - B;

    if(A <= mySunFlower.cols/2) {
        myAngle = atan(side2 / side1) * 180 / PI + 180;

    }else if(A > mySunFlower.cols/2 && B > mySunFlower.rows/2){
        myAngle = atan(side2/side1)*180/PI + 360;

    }else if( A > mySunFlower.cols/2 && B < mySunFlower.rows/2){
        myAngle = atan(side2/side1)*180/PI;
    }

    std::cout << "Your angle is: !!!" << myAngle << "!!! degrees." << std::endl;

    return 0;
}
