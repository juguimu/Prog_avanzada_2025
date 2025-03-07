#include<iostream>

//vector de edades
//método mostrar
//método agregar
//método quitar

using namespace std;

class Ejemplos_vector
{
private:
    string estudiantes[3];
    int numeros[3];
public:
    Ejemplos_vector();
    void mostrarEstudiantes();
    void mayor_menor();
};

Ejemplos_vector::Ejemplos_vector()
{
    for (int i = 0; i < 3; i++)
    {
        cout<<"Imprese nombre: ";
        cin>>estudiantes[i];
        cout<<"Imprese numeros: ";
        cin>>numeros[i];
    }
    
    
}

void Ejemplos_vector::mostrarEstudiantes(){
    for (int i = 0; i < 3; i++)
    {
        cout<<"Estudiante "<<i+1<<": "<<estudiantes[i]<<endl;
    }
}

void Ejemplos_vector::mayor_menor(){
    int mayor=numeros[0];
    int menor=numeros[0];
    for (int i = 1; i < 3; i++)
    {
        if(mayor<numeros[i])mayor=numeros[i];
        else{if(menor>numeros[i])menor=numeros[i];}
    }
    cout<<"menor: "<<menor<<endl;
    cout<<"mayor: "<<mayor<<endl;  
}
