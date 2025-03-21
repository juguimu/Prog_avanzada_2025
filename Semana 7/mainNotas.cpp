#include<iostream>
#include"Notas.h"




using namespace std;


int main(){

    string est[5]={"Juan","Andres","Julian","Eliazar","Jorge"};
    float notas[5]={2.0,1.3,5.0,4.5,3.8};

    Notas ejemplo(est,notas,5);

    ejemplo.imprimir();

    //ejemplo.eliminar("Juan");

    cout<<"----------------"<<endl;
    ejemplo.ordenar(false);

    ejemplo.imprimir();

    ejemplo.resumen();





    return 0;
}