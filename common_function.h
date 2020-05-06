//
// Created by 杨炜 on 2020/5/2.
//

#ifndef CAMPUS_CARD_MANAGEMENT_COMMON_FUNCTION_H
#define CAMPUS_CARD_MANAGEMENT_COMMON_FUNCTION_H

#include <string>
#include <array>
#include <chrono>
#include <ctime>
#include <random>
#include <fstream>
#include <sstream>
#include "Card.h"

static std::array<std::string,4> drivers={"张三","李四","王五","小六"};

static std::array<std::string ,2> type={"MiniBus","MegaBus"};
std::pair<int,int> getCurrentTime();

int randomNumber(int start,int end);

std::pair<bool,Card*> openFile(std::string filename,int number);
#endif //CAMPUS_CARD_MANAGEMENT_COMMON_FUNCTION_H
