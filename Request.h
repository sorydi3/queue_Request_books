#pragma once
#ifndef REQUEST_H
#define REQUEST_H

#include<iostream>
#include"Book.h"
#include"Member.h"

class Request
{
public:
	//CONSTRUCTOR
	Request();
	//CONSULTORS
	void showRequest()const;
	double getPrice()const;
	//MODIFICADORS
	void newRequest();
private:
	Member _member;
	Book _book;
};

#endif // !REQUEST_H

