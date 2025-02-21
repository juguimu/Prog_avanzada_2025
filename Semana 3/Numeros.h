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
	//num debe ser positivo y mayor que 1
	/* while (true)
	{
		cout << "Ingrese el numero: ";
		cin >> num;
		cout<<"Ingreso el numero";
		if (num>1)
		{
			cout<<"break";
			break;
		}
		
	}	 */	
	bool band=true;
	while(band){
		cout << "Ingrese el numero: ";
		cin >> num;
		if (num>1)
		{
			band=false;
		}
	}
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




