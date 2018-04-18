#pragma once
#include<iostream>
#include<string>
#include "Request.h"
using namespace std;
class Cua
{
public:
	Cua();
	//copy constructor
	Cua(const Cua &source);
	Cua& operator=(const Cua& source);
	~Cua();
private:
	struct Node
	{
		Request request;
		Node *next;
	}; 
	Node *_first;
	Node *_last;
	unsigned _countador
}; 

