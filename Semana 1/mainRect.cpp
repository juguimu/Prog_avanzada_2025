#include<iostream>
#include "Rectangulo.h"
using namespace std;

Rectangulo juan;

Rectangulo julian;

Rectangulo jorge;

Rectangulo eliazar;


int main(){

    juan.iniciarAtributos();
    julian.iniciarAtributos();
    jorge.iniciarAtributos();
    eliazar.iniciarAtributos();

    cout<<"El perimetro de juan"<<endl;
    juan.perimetro();

    cout<<"El perimetro de julian"<<endl;
    julian.perimetro();

    cout<<"El perimetro de jorge"<<endl;
    jorge.perimetro();

    cout<<"El perimetro de eliazar"<<endl;
    eliazar.perimetro();
    return 0;
}