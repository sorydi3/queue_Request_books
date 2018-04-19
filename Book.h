#pragma once
#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<string>
using namespace std;
class Book
{

public:
	//CONSTRUCTOR
	Book();
	//CONSULTORS
	void showBook()const;
	double getPrice()const;
	//MODIFICADOR
	void readBook();
private:
	string _titol;
	string _autor;
	string _ISBN;
	double _preu;
};
#endif // !1
