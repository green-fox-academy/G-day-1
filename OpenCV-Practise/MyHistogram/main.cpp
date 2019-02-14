#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include <stdint.h>
#include <math.h>

cv::Mat histogram(cv::Mat image);

int main() {

    cv::Mat image = cv::imread("../pic.jpg", cv::IMREAD_UNCHANGED);
    if (!image.data) {
        std::cout << "Could not open or find the image" << std::endl;
        return -1;
    }

    histogram(image);
    cv::waitKey();

    return 0;
}

cv::Mat histogram(cv::Mat image)
{
    std::vector<cv::Mat> BGR;
    cv::split (image, BGR);

    int histogramSize = 256;
    float range[] = {0, 256};
    const float* histRange = {range};
    bool uniform = true;
    bool accumulate = false;

    cv::Mat blueHistogram;
    cv::Mat redHistogram;
    cv::Mat greenHistogram;

    cv::calcHist(&BGR[0], 1, 0, cv::Mat(), blueHistogram, 1, &histogramSize, &histRange, uniform, accumulate);
    cv::calcHist(&BGR[1], 1, 0, cv::Mat(), greenHistogram, 1, &histogramSize, &histRange, uniform, accumulate);
    cv::calcHist(&BGR[2], 1, 0, cv::Mat(), redHistogram, 1, &histogramSize, &histRange, uniform, accumulate);

    int histWidth = 512;
    int histHeight = 400;
    int binWidth = cvRound((double)histWidth / histogramSize);

    cv::Mat histImage(histHeight, histWidth, CV_8UC3, cv::Scalar(0,0,0));

    cv::normalize(blueHistogram, blueHistogram, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());
    cv::normalize(greenHistogram, greenHistogram, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());
    cv::normalize(redHistogram, redHistogram, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());

    for( int i = 1; i < histogramSize; i++ )
    {
        line( histImage, cv::Point( binWidth*(i-1), histHeight - cvRound(blueHistogram.at<float>(i-1)) ),
              cv::Point( binWidth*(i), histHeight - cvRound(blueHistogram.at<float>(i)) ),
              cv::Scalar( 255, 0, 0), 2, 8, 0  );
        line( histImage, cv::Point( binWidth*(i-1), histHeight - cvRound(greenHistogram.at<float>(i-1)) ),
              cv::Point( binWidth*(i), histHeight - cvRound(greenHistogram.at<float>(i)) ),
              cv::Scalar( 0, 255, 0), 2, 8, 0  );
        line( histImage, cv::Point( binWidth*(i-1), histHeight - cvRound(redHistogram.at<float>(i-1)) ),
              cv::Point( binWidth*(i), histHeight - cvRound(redHistogram.at<float>(i)) ),
              cv::Scalar( 0, 0, 255), 2, 8, 0  );
    }

    imshow("Base pic :)", image);
    imshow("Our calcHist picture", histImage );

    cv::waitKey();

    return histImage;
}