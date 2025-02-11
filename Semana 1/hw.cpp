#include<iostream>
//Atributo: Decano; Métodos: inicializar, contratar y salida
using namespace std; 

class Grupo
{
public:
    int numEstudiantes;//Característica
    void cargarEstudiantes();//Acción   
};

void Grupo::cargarEstudiantes(){
    cout<<"Ingrese el numero estudiantes: "<<endl;
    cin>>numEstudiantes;
}



