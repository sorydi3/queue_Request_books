// QueueRequestsBooks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "Book.h"
#include "Member.h"
#include"Request.h"
#include"Cua.h"

using namespace std;
void menu() {
	cout << "A: AFEGIR SOL·LICITUD" << endl;
	cout << "L: LLISTAT SOL·LICITUDS" << endl;
	cout << "P: LLISTAT ORDRE DE COMPR" << endl;
	cout << "C: PREVISIÓ COST SOL·LICITUD" << endl;
	cout << "S: SORTIR [+L]" << endl;
}
void manager(Cua &cua,char opcio) {
	switch (opcio)
	{
	case 'A':
		cua.AfegirSolicitud();
		break;
	case 'L':
		cua.DisplayContent();
		break;
	case 'P':
		cua.presupostDisponible();
		break;
	case 'C':
		cua.previsio();
		break;
	default:
		cout << "INVALID OPERACIO" << endl;
		break;
	}
}
int main()
{
	Cua cua;
	char opcio;
	cout << "> OPCIÓ:" << endl;
	cin >> opcio;
	while (opcio != 'S') {
		manager(cua,opcio);
		cout << endl;
		cout << "> OPCIÓ:" << endl;
		cin >> opcio;

	}
    return 0;
}

