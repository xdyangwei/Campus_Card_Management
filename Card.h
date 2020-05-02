//
// Created by 杨炜 on 2020/5/1.
//

#ifndef CAMPUS_CARD_MANAGEMENT_CARD_H
#define CAMPUS_CARD_MANAGEMENT_CARD_H

#include <string>

using str=std::string;

class Card{
public:
    bool isValid();
    double getMoney();
    virtual void swipeCard()=0;
    void depositMoney(double money);
    int getTimes();
    void cancelAccount();
protected:
    str Name;
    int Sex;
    int Identity;
    int IdNumber;
    bool Status;
    double Money;
    int Times;
};

class TeacherCard: public Card{
public:
    TeacherCard(str name1,int sex1,int identity1,int number,str school1);
    void swipeCard();
private:
    str School;
};

class StudentCard: public Card{
public:
    StudentCard(str name1,int sex1,int identity1,int number,str school1);
    void swipeCard();
private:
    str School;
};

class FamilyCard: public Card{
public:
    FamilyCard(str name1,int sex1,int identity1);
    void swipeCard();
};
#endif //CAMPUS_CARD_MANAGEMENT_CARD_H
