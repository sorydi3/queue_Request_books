#include "stdafx.h"
#include "Book.h"


Book::Book()
{
	 _titol="";
	 _autor="";
	_ISBN="";
	_preu=0;
}

void Book::readBook() {
	cin.ignore();
	cout << "TÍTOL:" << endl;
	getline(cin,_titol);
	cout << "AUTOR:" << endl;
	getline(cin,_autor);
	cout << "ISBN-13:" << endl;
	getline(cin , _ISBN);
	cout << "COST:" << endl;
	//cin.ignore();
	cin >> _preu;
}
void Book::showBook()const {
	cout << "[ " << _titol << " | " << _autor << " | " << _ISBN << " | " << _preu << " € ] ]" << endl;
}

double Book::getPrice()const {
	return _preu;
}