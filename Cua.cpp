#include "stdafx.h"
#include "Cua.h"
#include<iomanip>

Cua::Cua()
{
	_first = NULL;
	_last = NULL;
	_countador = 0;
	_price_previsio = 0;
}

//COPPY CONSTRUCTOR

Cua::Cua(const Cua& source) {
	copy(source);
}
void Cua::copy(const Cua& source) {
	Node *p = source._first;//declarem un punter auxiliar que apunta el primer element de la cua
	while (p) {
		addLast(p->request);//encuem una nova sol.licitud a la cua  
		p = p->next;//recorrem la cua amb un punter auxiliar
	}
}

///////////////////////////////////////////////////////////////////////////////////
void Cua::AfegirSolicitud() {
	Request request;
	request.newRequest();
	addLast(request);
}
//////////////////////////////////////////////////////////////////////////////////

void Cua::addLast(Request request) {
	Node *nw = new Node;
	_countador++;//actualitza variable per calcular previsio
	_price_previsio += request.getPrice();
	nw->request = request;
	nw->next = NULL;
	if (!_first) {
		_first = nw;
		_last = nw;
	}
	else {
		//nw->request.showRequest();
		_last->next = nw;
		_last = nw;
	}
}
void Cua::deleteFirst() {
	Node *t = _first;
	if (_first ==_last) {
		_first = _last = NULL;
	}
	else{
		_first = _first->next;
	}
	delete t;
}
bool Cua::isEmpty()const {
	return _first;
}
void Cua::DisplayContent() {
	Node *temp = _first;
	double total_price = 0;
	while (temp) {
		temp->request.showRequest();
		total_price += temp->request.getPrice();
		temp = temp->next;
	}
	if (temp) {
		cout << "TOTAL = " << fixed << setprecision(2) << total_price << " €" << endl;
	}
	else {
		cout << "Cua buida." << endl;
		cout << "TOTAL = " <<"0.00"<< " €" << endl;
		
	}
}
void Cua::FreeHeap() {
	while (_first) {
		 Node *aux = _first;
		_first = _first->next;
		delete aux;
	}
	_last =_first= NULL;
	
}

Cua::~Cua()
{
	FreeHeap();
}

Cua& Cua::operator=(const Cua& cua) {
	if (this != &cua) {
		FreeHeap();
		copy(cua);
	}
	return *this;
}
void Cua::showPrices() const {
	Node *t = _first;
	while (t) {
		cout << "price -->" << t->request.getPrice() << endl;
		t = t->next;
	}

}
Cua Cua::copiaMethods(Cua &cua) {
	Cua cuap = cua;
	cuap.AfegirSolicitud();
	return cuap;
}
void Cua::presupostDisponible() {
	//pre:
	//post:
	cout << "PRESSUPOST DISPONIBLE:" << endl;
	double price;
	bool trobat = false;
	double suma = 0;
	cin >> price;
	double remanent = price;
	Node *t = _first;
	unsigned countador = 0;
	if (t) {
		while (t && !trobat) {
			
			if (t->request.getPrice()>price && suma == 0) {
				trobat = true;
			}
			else{
				suma += t->request.getPrice();
				if (suma<= price) {
					countador++;
					remanent-= t->request.getPrice();
					cout << setw(3) << setfill('0') << countador << " ";
					t->request.showRequest();
					t = t->next;
					deleteFirst();
				}
				else {
					trobat = true;
				}

			}

		}
		cout << "COMANDA  = " << remanent << " €" << endl;
		cout << "REMANENT = " << remanent <<" €"<< endl;
	}
	else {
		cout << "LA LLISTA ES VUIDA!" << endl;
	}
}

void Cua::previsio()const {
	double result;
	if (_countador != 0) {
		result = _price_previsio / _countador;
		cout << "PREVISIÓ COST: " << setprecision(2) << result << endl;
	}
	else {
		cout << "PREVISIÓ COST:  Indeterminat" << endl;
	}
}