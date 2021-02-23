//
// Created by hoshino on 2021/1/29.
//
#include "target_get.h"
#include "collect.hpp"

void get_target(cv::Mat src,bool DEBUG_ON=true)
{
    cv::Mat range;
    cv::inRange(src,cv::Scalar(0,0,0),cv::Scalar(180,255,46),range);
    if(DEBUG_ON)
    {
        cv::imshow("hsv",range);
        cv::waitKey();
    }

}

void test(void)
{
    cv::Mat test_src = cv::imread("/home/hoshino/CLionProjects/Robo-uw/src/target_get/src/img.png");
    cv::Mat img_hsv;
    cv::cvtColor(test_src,img_hsv,cv::COLOR_BGR2HSV);
    get_target(img_hsv);
}