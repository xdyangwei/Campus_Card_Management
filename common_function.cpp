//
// Created by 杨炜 on 2020/5/2.
//
#include "common_function.h"

//获取当前系统时间
std::pair<int,int> getCurrentTime() {
    auto time=std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    auto hour=std::localtime(&time)->tm_hour;
    auto min=std::localtime(&time)->tm_min;
    return std::make_pair(hour,min);
}

//根据所设区间生成随机数
int randomNumber(int start,int end){
    //std::random_device r;
    std::mt19937_64 e(time(0));
    std::uniform_int_distribution<int> uniform_dist(start,end);
    int x=uniform_dist(e);
    return x;
}

//查询当前卡号是否存在
std::pair<bool,Card*> openFile(std::string filename,int number){
    std::fstream file(filename);
    std::string line;
    while(std::getline(file,line)){
        std::stringstream str(line);
        std::string CardNumber;
        str>>CardNumber;
    }
}