#ifndef CLASSIFICATION_H
#define CLASSFICIATION_H

#include <opencv2/opencv.hpp>


class Classification
{
    public:
        Classification();
        virtual ~Classification();
        Classification(std::string imageName);
        void convertImageToGrayScale(std::string imageName);

        std::string m_imageName;
        cv::Mat image;
        cv::Mat grayImage;
}

#endif