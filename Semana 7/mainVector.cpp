#include<iostream>
#include"Vectores.h"


Vectores ejemplo(7);

using namespace std;


int main(){

    ejemplo.ordenar(0);
    ejemplo.imprimir();
    cout<<"---------------------"<<endl;
    ejemplo.ordenar(1);
    ejemplo.imprimir();




    return 0;
}