/*Construir una clase llamada Contador con un atributo
entero n.La clase tiene dos métodos ascendente() y 
descendente(), el método ascendente muestra en consola 
el conteo de 0 hasta n, y el método descendente(), 
muestra en consola el conteo desde n hasta 0.*/



#include<iostream>

using namespace std;

class Contador
{
public:
	int n;
	void inicializar();
	void ascendente();
	void descendente();
	void ascendenteWhile();
	void descendenteWhile();
};

void Contador::inicializar() {
	cout << "Ingrese el valor de n: ";
	cin >> n;
}

void Contador::ascendente(){
	for (int i = 0; i <=n ; i++)
	{
		cout << "El conteo va en: " << i << endl;
	}
}

void Contador::descendente() {
	for (int i = n; i >= 0; i--)
	{
		cout << "El conteo va en: " << i << endl;
	}
}

void Contador::ascendenteWhile() {
	int i = 0;
	while (i<=n) {
		cout << "El conteo va en: " << i << endl;
		i++;
	}

}

void Contador::descendenteWhile() {
	int i = n;
	while (i >= 0) {
		cout << "El conteo va en: " << i << endl;
		i--;
	}
}

