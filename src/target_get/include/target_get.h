//
// Created by hoshino on 2021/1/29.
//

#ifndef ROBO_UW_TARGET_GET_H
#define ROBO_UW_TARGET_GET_H
#include <opencv2/opencv.hpp>
enum trash_type
{
    rect = 0
    ,circle
};

class target
{
public:
    bool exist;
    int target_x;
    int target_y;
    int center_x;
    int center_y;
    int type;
};
void get_target(cv::Mat src,bool DEBUG_ON);
void test(void);
#endif //ROBO_UW_TARGET_GET_H
