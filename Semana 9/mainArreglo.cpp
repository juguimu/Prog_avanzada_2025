#include<iostream>
#include"Arreglo.h"


int tam=3;
int x[]={1,2,3};

Arreglo vector(x,tam);

using namespace std;


int main(){
    vector.mostrar();
    vector.agregar(23);
    vector.eliminar(1);
    cout<<"-------------"<<endl;
    vector.mostrar();

    return 0;
}