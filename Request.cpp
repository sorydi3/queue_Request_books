#include "stdafx.h"
#include "Request.h"


Request::Request()
{
}

void Request::showRequest()const {
	_member.showMember();
	_book.showBook();
}

void Request::newRequest() {
	_member.readMember();
	_book.readBook();
}
