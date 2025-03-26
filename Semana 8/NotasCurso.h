#include<iostream>
#include<iomanip>


using namespace std;

const int numeroNotas=5;

char linea='-';

class NotasCurso
{
private: 
    float notas[50][numeroNotas];
    string nombreEst[50];
    int numEst;

public:
    NotasCurso(int=3);
    void mostrarPlanilla();
    
};

NotasCurso::NotasCurso(int nEst)
{
    numEst=nEst;
    //Vectores y matriz de prueba
    string estudiantes[]={"Eliazar","Julian","Jorge"};
    float calificaciones[][5]={{4.5,4.2,1.2,3.0},{3.5,2.0,1.0,1.0},{2.0,4.0,5.0,4.0}};
    for (int i = 0; i < numEst; i++)
    {
        nombreEst[i]=estudiantes[i];
        for (int j = 0; j < numeroNotas-1; j++)
        {
            notas[i][j]=calificaciones[i][j];
        }
        notas[i][numeroNotas-1]=notas[i][0]*0.2+notas[i][1]*0.3+notas[i][2]*0.15+notas[i][3]*0.35;
        
    }
}

void NotasCurso::mostrarPlanilla(){

    for (int i = 0; i < 74; i++)
    {
        cout<<linea;
    }
    cout<<endl;
    cout<<"|"<<setw(15)<<"Estudiante"
    <<"|"<<setw(10)<<"Parcial 1"
    <<"|"<<setw(10)<<"Parcial 2"
    <<"|"<<setw(10)<<"Talleres"
    <<"|"<<setw(10)<<"Proyecto"
    <<"|"<<setw(13)<<"NDefinitiva |"<<endl;
    for (int i = 0; i < 74; i++)
    {
        cout<<linea;
    }
    cout<<endl;
    for (int i = 0; i < numEst; i++)
    {
        cout<<"|"<<setw(15)<<nombreEst[i];   
        cout<<"|"<<setw(10)<<notas[i][0]
            <<"|"<<setw(10)<<notas[i][1]
            <<"|"<<setw(10)<<notas[i][2]
            <<"|"<<setw(10)<<notas[i][3]
            <<"|"<<setw(12)<<notas[i][4]<<"|"<<endl;
        for (int i = 0; i < 74; i++)cout<<linea;
        cout<<endl;       
    }
}