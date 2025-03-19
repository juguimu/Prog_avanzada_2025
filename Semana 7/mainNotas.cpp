#include<iostream>
#include"Notas.h"


Notas ejemplo;

using namespace std;


int main(){

    ejemplo.imprimir();

    cout<<"----------------";
    ejemplo.ordenar(true);

    ejemplo.imprimir();





    return 0;
}