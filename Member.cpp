#include "stdafx.h"
#include "Member.h"


Member::Member()
{
	_Id = 0;
}

unsigned Member::getId() const {
	return _Id;
}
void Member::readMember() {
	cout << "NÚMERO SOCI:" << endl;
	cin >> _Id;
	cout << "DATA [YYYYMMDD]:" << endl;
	_data.llegir(1);
}
void Member::showMember()const{
	cout <<"[ "<< _Id << " | ";
	_data.mostrar(1);
	cout << " | ";
}