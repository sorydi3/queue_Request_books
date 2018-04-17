// QueueRequestsBooks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "Book.h"
#include "Member.h"
#include"Request.h"
using namespace std;

int main()
{
	Book book;
	Member member;
	member.readMember();
	book.readBook();
	cout << "001" << " [ ";
	member.showMember();
	book.showBook();
	cout << " ]" << endl;
	cout << endl;
	cout << book.getPrice() << endl;
	cout << member.getId() << endl;
	Request request;
	request.newRequest();
	request.showRequest();
    return 0;
}

