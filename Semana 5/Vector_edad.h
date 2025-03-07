#include<iostream>

//vector de edades
//método mostrar
//método agregar
//método quitar

using namespace std;

class Vector_edad
{
private:
    int edad[40];
    int tam_vector;
public:
    Vector_edad(int[],int);
    void mostrar();
    void agregar(int);
    void eliminar(int);
};

Vector_edad::Vector_edad(int vector[],int tam)
{
    for (int i = 0; i < tam; i++)
    {
        edad[i]=vector[i];
    }
    tam_vector=tam;
}

void Vector_edad::mostrar(){
    for (int i = 0; i < tam_vector; i++)
    {
        cout<<"Edad pos "<<i+1<<": "<<edad[i]<<endl;
    }
}

void Vector_edad::agregar(int e){
    if(tam_vector<=40){
        edad[tam_vector]=e;
        tam_vector++; 
    }    
    else{
        cout<<"No se pueden ingresar más datos!"<<endl;
    }   
    
}

void Vector_edad::eliminar(int pos){
    edad[pos]=0;
    int temp;
    if(pos==(tam_vector-1)){
        tam_vector--;
    }
    else{

        for (int i = pos; i < tam_vector; i++)
        {
            edad[i]=edad[i+1];
            edad[i+1]=0;
        }  
        tam_vector--;   
    }

}
