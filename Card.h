//
// Created by 杨炜 on 2020/5/1.
//

#ifndef CAMPUS_CARD_MANAGEMENT_CARD_H
#define CAMPUS_CARD_MANAGEMENT_CARD_H

#include <iostream>
#include <string>

using str=std::string;

class Card{
public:
    bool isValid();
    virtual void swipeCard()=0;
    int getTimes();
    void cancelAccount();
    double getMoney();
    void depositMoney(double money);
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
    void swipeCard() override;
private:
    str School;
};

class StudentCard: public Card{
public:
    StudentCard(str name1,int sex1,int identity1,int number,str school1);
    void swipeCard() override;
private:
    str School;

};

class FamilyCard: public Card{
public:
    FamilyCard(str name1,int sex1,int identity1);
    void swipeCard();
};
#endif //CAMPUS_CARD_MANAGEMENT_CARD_H
