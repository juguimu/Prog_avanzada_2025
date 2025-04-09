#include<iostream>


using namespace std;

class Vectores
{
private:
    int *vector;
    int *clase;
    int tam;
    int tamClase;
    void clases();
public:
    Vectores(int[],int);
    ~Vectores();
    void mostrar();
    void agregar(int);
    void eliminar(int);
    void contar();
    void agregarClase(int);    
};

Vectores::Vectores(int v[],int svector)
{
    bool band=true;
    tam=svector;
    vector=new int[tam];
    for (int i = 0; i < tam; i++)
    {
        vector[i]=v[i];
    } 
    tamClase=0;
    agregarClase(vector[0]);
    
    for (int i = 1; i < tam; i++)
    {
        for (int j = 0; j < tamClase; j++)
        {
            if(clase[j]==vector[i]){
                band=false;
                break;
            }
        }
        if(band){
            agregarClase(vector[i]);
        }
        else{
            band=true;
        }
        
    }
    
    //clase
}

Vectores::~Vectores()
{
      delete[] vector;
      delete[] clase;
}

void Vectores::mostrar(){
    for (int i = 0; i < tamClase; i++)
    {
        cout<<"V: "<<clase[i]<<endl;
    } 
}

void Vectores::agregar(int valor){

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

void Vectores::eliminar(int pos){

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

void Vectores::agregarClase(int valor){

    int *tempVector=new int[tamClase+1];

    for (int i = 0; i < tamClase; i++)
    {
        tempVector[i]=clase[i];
    } 
    tempVector[tamClase]=valor;

    delete[] clase;

    clase=tempVector;

    tamClase++;

}





