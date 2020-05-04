//
// Created by 杨炜 on 2020/5/2.
//

#ifndef CAMPUS_CARD_MANAGEMENT_BUS_H
#define CAMPUS_CARD_MANAGEMENT_BUS_H

#include <string>
#include <tuple>
#include "common_function.h"
#include <iostream>


template<int N>
class Bus {
    using str=std::string;
public:
    Bus();
    void add();
    std::tuple<int,str,int,str> getInfo();
    int getSize();
    void setCarNumber(int num);
    void setDriver(str driver);
private:
    int CarNumber;
    str Type;
    int Size;
    int Capacity;
    str Driver;
};


#endif //CAMPUS_CARD_MANAGEMENT_BUS_H
