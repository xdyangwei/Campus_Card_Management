//
// Created by 杨炜 on 2020/5/2.
//

#include "Bus.h"

template<int N>
Bus<N>::Bus():
Capacity(N){
    Type=randomNumber(0,1);
    Size=randomNumber(0,Capacity);
}

