#include<iostream>
#include"Vector_edad.h"

using namespace std;

int edades[4]={34,23,22,21};

Vector_edad curso(edades,4);

int main(){
    curso.mostrar();
    curso.agregar(35);
    curso.agregar(37);
    cout<<"-------------------"<<endl;
    curso.mostrar();
    return 0;
}