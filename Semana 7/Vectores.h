#include<iostream>

using namespace std;

class Vectores
{
private:
    int vector[50];
    int tam;
public:
    Vectores(int);
    void ordenar();
    void imprimir();
};

Vectores::Vectores(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese el valor en la pos "<<i<<": ";
        cin>>vector[i];
    }
    tam=n;
}

void Vectores::ordenar(){
    int temp;
    for (int j = 0; j < tam-1; j++)
    {
        for (int i = 0; i < tam-1-j; i++)
        {
            if (vector[i]<vector[i+1])
            {
                temp=vector[i];
                vector[i]=vector[i+1];
                vector[i+1]=temp;            
            }    
        }
    }   
}

void Vectores::imprimir(){

    for (int i = 0; i < tam; i++)
    {
        cout<<"Pos "<<i<<": "<<vector[i]<<endl;
    }    
}




