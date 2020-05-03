//
// Created by 杨炜 on 2020/5/2.
//

#include "Bus.h"

template<int N>
Bus<N>::Bus():
Capacity(N){
    Type=type[N/40];
    Size=randomNumber(0,Capacity);
}

template<int N>
void Bus<N>::add() {
    if(Size<=Capacity)
    Size+=1;
    else{
        std::cout<<"该车已坐满，请选择另一辆车或者等待下一趟车！"<<std::endl;
    }
}

