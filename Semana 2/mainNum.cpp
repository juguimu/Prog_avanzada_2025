#include<iostream>
#include"Numero.h"

using namespace std;

Numero progA;

int main(){

    progA.inicializar();
    progA.mayorQue();//6>4 - num=5
    progA.mayorQue();//5>4 - num=4
    progA.mayorQue();//4=4
    progA.mayorQue();//4=4

    return 0;
}

