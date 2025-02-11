#include<iostream>
#include"Universidad.h"


//Atributo: Decano; Métodos: inicializar, contratar y salida
using namespace std; 
Universidad itm;




int main(){
    

    itm.inicializar();
    cout<<"el número de decanos es: "<<itm.decanos<<endl;
    itm.contratar();
    itm.contratar();
    itm.contratar();
    itm.contratar();
    itm.contratar();
    cout<<"el número de decanos es: "<<itm.decanos<<endl;
    itm.salida();
    cout<<"el número de decanos es: "<<itm.decanos<<endl;

    return 0;

}