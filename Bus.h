//
// Created by 杨炜 on 2020/5/2.
//

#ifndef CAMPUS_CARD_MANAGEMENT_BUS_H
#define CAMPUS_CARD_MANAGEMENT_BUS_H

#include <string>
#include <tuple>
#include "common_function.h"

template<int N>
class Bus {
    using str=std::string;
public:
    Bus();
    void add();
    std::tuple<int,int,int,str> getInfo();
    int getSize();
    void setCarNumber();
    void setDriver();
private:
    int CarNumber;
    int Type;
    int Size;
    int Capacity;
    str Driver;
};


#endif //CAMPUS_CARD_MANAGEMENT_BUS_H
