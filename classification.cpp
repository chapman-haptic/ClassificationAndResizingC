#include <iostream>
#include "classification.h"
#include <opencv2/opencv.hpp>


using namespace cv;

Classification::Classification()
{

}

Classification::Classification(std::string imageName)
{
    m_imageName = imageName;
    image = cv::imread(imageName);
}

Classification::~Classification()
{

}

void Classification::convertImageToGrayScale()
{
    cv::cvtColor(image, grayImage, COLOR_BGR2GRAY);
}