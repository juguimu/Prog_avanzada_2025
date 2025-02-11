//Computadores
//Computadores_retirados

//Comprar
//Robo
//Mantenimiento





#include<iostream>
//Atributo: Decano; Métodos: inicializar, contratar y salida
using namespace std; 

class Universidad
{
public:
    int decanos;
    void contratar();
    void salida();
    void inicializar();
};

void Universidad::inicializar(){
    decanos=0;
}

void Universidad::contratar(){
    decanos++;
}

void Universidad::salida(){
    decanos--;
}

