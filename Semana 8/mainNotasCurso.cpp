#include<iostream>
#include"NotasCurso.h"

using namespace std;
NotasCurso programacion;

void menu();

int main(){
    string estudiante="Juan";
    float notas[]={2.0,1.2,4.0,5.0};
    float nota;
    string nombre;
    programacion.mostrarPlanilla();
    cout<<endl;
    programacion.agregar(estudiante,notas);
    programacion.mostrarPlanilla();
    programacion.eliminar("Juan");
    cout<<endl;
    programacion.ordenar(false,4);
    programacion.mostrarPlanilla();
    cout<<"NumEst: "<<programacion.numEst<<endl;
    programacion.mayor_menor(false,1,nota,nombre);
    
    cout<<"La nota mayor del parcial 2 es: "<<nota<<endl;
    cout<<"Corresponde a: "<<nombre<<endl;

    //menu();


    return 0;
}

void menu(){
    cout<<"Curso de programación"<<endl;
    cout<<endl;
    cout<<"Seleccione alguna de las opciones a continuación"<<endl;

}