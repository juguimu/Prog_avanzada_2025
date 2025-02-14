#include<iostream>

using namespace std;

class Numeros_ab
{
public:
    int ab,A;
    void inicializar();
    void operaciones();    
};

void Numeros_ab::inicializar(){
    cout<<"Ingrese el valor de A: ";
    cin>>A;
    cout<<"Ingrese el valor de ab: ";
    cin>>ab;
}

void Numeros_ab::operaciones(){
    int a,b;
    b=ab%10;
    a=ab/10;

    switch (A)
    {
    case 1:
        cout<<"a+b = "<<a+b<<endl;
        break;
    case 2:
        cout<<"a-b = "<<a-b<<endl;
        break;
    case 3:
        cout<<"a*b = "<<a*b<<endl;
        break;
    case 4:
        if (b!=0)
        {
            cout<<"a/b = "<<a/b<<endl;
        }
        else{
            cout<<"No es posible dividir por cero"<<endl;
        }        
        break;
    default:
        cout<<"Seleccion invalida"<<endl;
        break;
    }
}


