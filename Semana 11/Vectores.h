#include<iostream>
#include<vector>
#include<string>
#include<iomanip>

using namespace std;

class Vectores
{
private:
    vector<string> nombres;
    vector<int> edades; 
public:
    Vectores(vector<string>,vector<int>);
    void mostrar();
    void agregar(string,int);
    void eliminar(int);//Ejercicio nombre como atributo;
};

Vectores::Vectores(vector<string> n,vector<int> e)
{
    nombres=n;
    edades=e;
}

void Vectores::mostrar(){

    for (int i = 0; i < nombres.size(); i++)
    {
        cout<<setw(25)<<nombres.at(i)
            <<setw(25)<<edades[i]<<endl;            
    }
}

void Vectores::agregar(string n, int e){
    nombres.push_back(n);
    edades.push_back(e);
}

void Vectores::eliminar(int pos){
    nombres.erase(nombres.begin()+pos);
    edades.erase(edades.begin()+pos);
}


