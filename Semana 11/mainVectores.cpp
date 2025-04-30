#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include"Vectores.h"

using namespace std;

int main(){
    Vectores progAvanzada({"nombre1","nombre2","nombre3"},
                          {22,34,25});
    progAvanzada.agregar("nombre4",21);
    progAvanzada.eliminar("nombre2");
    progAvanzada.mostrar();

    return 0;

}