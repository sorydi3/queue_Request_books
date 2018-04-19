//#include "stdafx.h"
#include "Book.h"
Book::Book()
{
	 _titol="";
	 _autor="";
	_ISBN="";
	_preu=0;
}

void Book::readBook() {
	cin.ignore(100,'\n');
	cout << "TÍTOL:" << endl;
	getline(cin, _titol);
	cout << "AUTOR:" << endl;
	getline(cin, _autor);
	cout << "ISBN-13:" << endl;
	cin >> _ISBN;
	cout << "COST:" << endl;
	cin >> _preu;
}

void Book::showBook()const {
	cout << "[ " << _titol << " | " << _autor << " | " << _ISBN << " | " << _preu << " \u20AC"<<" ] ]" << endl;
}

double Book::getPrice()const {
	return _preu;
}