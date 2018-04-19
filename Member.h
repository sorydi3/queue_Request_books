#pragma once
#ifndef MEMBER_H
#define MEMBER_H
#include"Data.h"
#include<iomanip>
class Member
{
public:
	//CONSTRUCTOR
	Member();
	//CONSULTORS
	void showMember()const;
	unsigned getId() const;
	//MODIFICADORS
	void readMember();
private:
	unsigned _Id;
	Data _data;
};
#endif