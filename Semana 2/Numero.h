#include<iostream>
//Consultar como imprimir tildes en consola
using namespace std;

class Numero
{
public:
    int num;
    int nivel;
    void inicializar();
    void mayorQue();   
};

void Numero::inicializar(){
    cout<<"Ingrese el numero: "<<endl;
    cin>>num;
    cout<<"Ingrese el nivel: "<<endl;
    cin>>nivel;
}

void Numero::mayorQue(){
    if (num>nivel)
    {
        cout<<"El numero es mayor que el nivel"<<endl;
        num--;
    }    
    else if(num<nivel){
        cout<<"El numero es menor que el nivel"<<endl;
        num++;
    }
    else{
        cout<<"El numero es igual al nivel"<<endl;
    }
}

