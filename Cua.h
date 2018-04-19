#pragma once

#ifndef CUA_H
#define CUA_H

#include<iostream>
#include<string>
#include"Request.h"
using namespace std;
class Cua
{
public:
	Cua();
	
	//copy constructor
	Cua(const Cua &source);
	Cua& operator=(const Cua& source);
	void DisplayContent();
	void AfegirSolicitud();
	Cua copiaMethods(Cua& cua);
	void presupostDisponible();
	void previsio()const;
	void showPrices()const;
	~Cua();
private:
	struct Node
	{
		Request request;
		Node *next;
	}; 
	Node *_first;
	Node *_last;
	unsigned _countador;
	double _price_previsio;

	void copy(const Cua& source);
	void FreeHeap();
	bool isEmpty()const;
	void addLast(Request &request);
	void deleteFirst();
}; 
#endif

