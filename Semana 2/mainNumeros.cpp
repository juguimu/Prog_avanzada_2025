#include<iostream>
#include"Numeros.h"

using namespace std;

Numeros progA;

int main(){

    progA.inicializar();
    progA.encontrarMayor();
    progA.encontrarMenor();
    progA.encontrarIguales();
    return 0;
}