#pragma once

#include<iostream>

using namespace std;

class Operaciones
{
public:
	int A, B;
	void inicializar();
	void suma_resta();
	void mayor_menor();
};

void Operaciones::inicializar() {
	cout << "Ingrese A: ";
	cin >> A;
	cout << "Ingrese B: ";
	cin >> B;
}

void Operaciones::suma_resta() {
	if (A>B)
	{
		cout << "Resta A-B = " << A - B;
	}
	else {
		cout << "Suma A+B = " << A + B;
	}
}

void Operaciones::mayor_menor() {
	if (A > B)
	{
		cout << "A es mayor que B";
	}
	else if(A<B){
		cout << "B es mayor que A";
	}
	else {
		cout << "Son iguales";
	}
}
