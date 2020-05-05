//
// Created by 杨炜 on 2020/5/1.
//

#include "CARD.h"


//查询卡是否有效
bool Card::isValid() {
    return Status;
}

//查询余额
double Card::getMoney() {
    return Money;
}

//充值
void Card::depositMoney(double money) {
    Money+=money;
    std::cout<<"您成功充值"<<money<<"元，当前余额为"<<Money<<"元！"<<std::endl;
}

//查询乘车次数
int Card::getTimes() {
    return Times;
}

//注销账户
void Card::cancelAccount() {
    Status= false;
}

//教师卡刷卡
void TeacherCard::swipeCard() {
    if (!Status)
        std::cout<<"当前一卡通已被注销，无法使用，请使用新的一卡通！"<<std::endl;
    return;
}

//学生卡刷卡
void StudentCard::swipeCard() {
    if (!Status){
        std::cout<<"当前一卡通已被注销，无法使用，请使用新的一卡通！"<<std::endl;return;}
    if (Money<2){
        std::cout<<"当前一卡通余额不足请充值！"<<std::endl;return;
    }
    Money-=2;
    Times+=1;
}

//教师家属刷卡
void FamilyCard::swipeCard() {
    if (!Status){
        std::cout<<"当前一卡通已被注销，无法使用，请使用新的一卡通！"<<std::endl;return;}
    if (Times<20){
        Times+=1;
        return ;
    }
    if(Times==19){
        std::cout<<"本月最后一次免费乘车！"<<std::endl;
        Times+=1;return ;
    }else if(Times==20){
        std::cout<<"本次开始收费！"<<std::endl;
    }
    if (Money<2){
        std::cout<<"当前一卡通余额不足请充值！"<<std::endl;return;
    }
    Money-=2;
    Times+=1;
}
