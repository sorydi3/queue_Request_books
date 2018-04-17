#pragma once
#include"Data.h"
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

