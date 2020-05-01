//
// Created by 杨炜 on 2020/5/1.
//

#ifndef CAMPUS_CARD_MANAGEMENT_CARD_H
#define CAMPUS_CARD_MANAGEMENT_CARD_H

#include <string>

using str=std::string

class Card{
public:
    bool isValid();
    double getMoney();
    virtual void swipeCard()=0;
    void depositMoney(double money);
    int getTimes();
    void cancelAccount();
private:
    str name;
    int sex;
    int identity;
    int id_number;
    bool status;
    double money;
    int times;
};

class Teacher_Card: public Card{
public:
    Teacher_Card(str name1,int sex1,int identity1,int number,str school1);
    void swipeCard();
private:
    str school;
};

class Student_Card: public Card{
public:
    Student_Card(str name1,int sex1,int identity1,int number,str school1);
    void swipeCard();
private:
    str school;
};

class Family_Card: public Card{
public:
    Family_Card(str name1,int sex1,int identity1);
    void swipeCard();
};
#endif //CAMPUS_CARD_MANAGEMENT_CARD_H
