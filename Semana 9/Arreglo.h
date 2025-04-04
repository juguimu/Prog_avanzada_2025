#include<iostream>


using namespace std;

class Arreglo
{
private:
    int *vector;
    int tam;
public:
    Arreglo(int[],int);
    ~Arreglo();
    void mostrar();
    void agregar(int);
    void eliminar(int);
};

Arreglo::Arreglo(int v[],int n)
{
    tam=n;
    vector=new int[n];
    for (int i = 0; i < tam; i++)
    {
        vector[i]=v[i];
    } 
}

Arreglo::~Arreglo()
{
      
}

void Arreglo::mostrar(){
    for (int i = 0; i < tam; i++)
    {
        cout<<"V: "<<vector[i]<<endl;
    } 
}

void Arreglo::agregar(int valor){

    int *tempVector=new int[tam+1];

    for (int i = 0; i < tam; i++)
    {
        tempVector[i]=vector[i];
    } 
    tempVector[tam]=valor;

    delete[] vector;

    vector=tempVector;

    tam++;

}

void Arreglo::eliminar(int pos){

    int *tempVector=new int[tam-1];
    int cont=0;
    for (int i = 0; i < tam; i++)
    {
        if(i!=pos){
        tempVector[cont]=vector[i];
        cont++;
        }
    } 
    delete[] vector;

    vector=tempVector;

    tam--;
}


