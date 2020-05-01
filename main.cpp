#include <iostream>
#include "Card.h"
#include <array>
#include <chrono>
#include <ctime>
#include <iomanip>

std::array<std::string,4> driver={"张三","李四","王五","小六"};

//获取当前系统时间
std::pair<int,int> getCurrentTime() {
    auto time=std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    auto hour=std::localtime(&time)->tm_hour;
    auto min=std::localtime(&time)->tm_min;
    return std::make_pair(hour,min);
}

int main() {
    auto time=getCurrentTime();
    std::cout<<time.first<<":"<<time.second<<std::endl;
    return 0;
}
