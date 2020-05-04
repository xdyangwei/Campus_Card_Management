//
// Created by 杨炜 on 2020/5/2.
//

#include "Bus.h"

//构造函数，随机生成客车基本信息
template<int N>
Bus<N>::Bus():
Capacity(N){
    Type=type[N/40];
    Size=randomNumber(0,Capacity);
}

//乘车
template<int N>
void Bus<N>::add() {
    if(Size<=Capacity)
    Size+=1;
    else{
        std::cout<<"该车已坐满，请选择另一辆车或者等待下一趟车！"<<std::endl;
    }
}

//返回汽车基本信息:车牌号，车型，当前载客人数，司机
template<int N>
std::tuple<int,std::string,int,std::string> Bus<N>::getInfo(){
    return std::make_tuple(CarNumber,Type,Size,Driver);
}

//根据参数设置车牌号
template<int N>
void Bus<N>::setCarNumber(int num) {
    CarNumber=num;
}

//根据参数设置司机
template<int N>
void Bus<N>::setDriver(std::string driver) {
    Driver=driver;
}
