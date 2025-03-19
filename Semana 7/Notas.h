#include <iostream>
#include<string>
#include<iomanip>


using namespace std;

class Notas
{
private:
    string estudiante[50];
    float parcial[50];
    int tam;
public:
    Notas(int=5);
    void ordenar(bool);
    void imprimir();
};

Notas::Notas(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Estudiante " << i << ": ";
        cin >> estudiante[i];
        cout << "Nota: ";
        cin >> parcial[i];
    }
    tam = n;
}


void Notas::ordenar(bool ad)
{
    float temp;
    if (ad)
    {
        for (int j = 0; j < tam - 1; j++)
        {
            for (int i = 0; i < tam - 1 - j; i++)
            {
                if (parcial[i] < parcial[i + 1])
                {
                    temp = parcial[i];
                    parcial[i] = parcial[i + 1];
                    parcial[i + 1] = temp;
                }
            }
        }
    }
    else{
        for (int j = 0; j < tam - 1; j++)
        {
            for (int i = 0; i < tam - 1 - j; i++)
            {
                if (parcial[i] > parcial[i + 1])
                {
                    temp = parcial[i];
                    parcial[i] = parcial[i + 1];
                    parcial[i + 1] = temp;
                }
            }
        }
    }
}

void Notas::imprimir()
{

    cout<<setw(12)<<"Estudiante"<<"|"<<setw(12)<<"Parcial"<<endl;
    cout<<"----------------------"<<endl;
    for (int i = 0; i < tam; i++)
    {
        cout<<setw(12)<<estudiante[i]<<"|"<<setw(12)<<parcial[i]<<endl;
    }
}
