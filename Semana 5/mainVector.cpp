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
    curso.eliminar(1);
    curso.mostrar();
    return 0;
}

//Algoritmo Eliminar
/* 
34 Pos 0
23 Pos 1
22 Pos 2
21 Pos 3 <---


34 Pos 0
0  Pos 1
22 Pos 2
21 Pos 3 <---

//paso 1
34 Pos 0
22 Pos 1
0  Pos 2
21 Pos 3 <---

//Paso 2
34 Pos 0
22 Pos 1
21 Pos 2
0  Pos 3 <---

//tam_vector--

//Paso 3
34 Pos 0
22 Pos 1
21 Pos 2 <---
0  Pos 3  */