#include<iostream>

using namespace std;

class Numeros
{
public:
	int num;

	void inicializar();
	void par_impar();
	void primo();
	void fibonacci();
};

void Numeros::inicializar() {
	cout << "Ingrese el numero: ";
	cin >> num;
}

void Numeros::par_impar() {
	if (num%2==0)
	{
		cout << "El numero es par" << endl;
	}
	else {
		cout << "El numero es impar" << endl;
	}
}

void Numeros::fibonacci() {

	if (num == 0 || num == 1) {
		cout << "Hace parte de la serie de Fibonacci" << endl;
	}
	else {
		int fn=0, fn_1=1, fn_2=1;
		while (fn <= num) {
			fn = fn_1 + fn_2;
			if (num == fn) {
				cout << "Hace parte de la serie de Fibonacci" << endl;
				break;
			}
			
			fn_2 = fn_1;
			fn_1 = fn;
		}
		if (fn > num) {
			cout << "No hace parte de la serie de Fibonacci" << endl;
		}
	}
}




