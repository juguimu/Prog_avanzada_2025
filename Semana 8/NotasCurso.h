#include<iostream>
#include<iomanip>


//Métodos

/*
-agregar un estudiante (ok)
-Notamayormenor retorna la nota y el estudiante(ok)
-eliminar un estudiante
-Resumen (número de aprobados, 
        porcentaje de aprobación, 
        promedio de cada una de las notas, 
        cuantos estudiantes ganaban la materia con el 50%)
*/


using namespace std;

const int numeroNotas=5;

char linea='-';

class NotasCurso
{
private: 
    float notas[50][numeroNotas];
    string nombreEst[50];
    

public:
    int numEst;
    NotasCurso(int=3);
    void mostrarPlanilla();
    void ordenar(bool,int);
    void agregar(string,float[]);
    void mayor_menor(bool,int,float&,string&);
    void eliminar(string);
    
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

void NotasCurso::ordenar(bool ad,int columna)
{
    float temp;
    string estudianteTemp;
    if (ad)
    {
        for (int n = 0; n < numEst - 1; n++)
        {
            for (int i = 0; i < numEst - 1 - n; i++)
            {
                if (notas[i][columna] < notas[i + 1][columna])
                {
                    temp = notas[i][0];
                    notas[i][0] = notas[i + 1][0];
                    notas[i + 1][0] = temp;

                    temp = notas[i][1];
                    notas[i][1] = notas[i + 1][1];
                    notas[i + 1][1] = temp;

                    temp = notas[i][2];
                    notas[i][2] = notas[i + 1][2];
                    notas[i + 1][2] = temp;

                    temp = notas[i][3];
                    notas[i][3] = notas[i + 1][3];
                    notas[i + 1][3] = temp;

                    temp = notas[i][4];
                    notas[i][4] = notas[i + 1][4];
                    notas[i + 1][4] = temp;



                    estudianteTemp = nombreEst[i];
                    nombreEst[i] = nombreEst[i + 1];
                    nombreEst[i + 1] = estudianteTemp;
                }
            }
        }
    }
    else{
        for (int n = 0; n < numEst - 1; n++)
        {
            for (int i = 0; i < numEst - 1 - n; i++)
            {
                if (notas[i][columna] > notas[i + 1][columna])
                {
                    temp = notas[i][0];
                    notas[i][0] = notas[i + 1][0];
                    notas[i + 1][0] = temp;

                    temp = notas[i][1];
                    notas[i][1] = notas[i + 1][1];
                    notas[i + 1][1] = temp;

                    temp = notas[i][2];
                    notas[i][2] = notas[i + 1][2];
                    notas[i + 1][2] = temp;

                    temp = notas[i][3];
                    notas[i][3] = notas[i + 1][3];
                    notas[i + 1][3] = temp;

                    temp = notas[i][4];
                    notas[i][4] = notas[i + 1][4];
                    notas[i + 1][4] = temp;



                    estudianteTemp = nombreEst[i];
                    nombreEst[i] = nombreEst[i + 1];
                    nombreEst[i + 1] = estudianteTemp;
                }
            }
        }
    }
}

void NotasCurso::agregar(string est,float cal[]){
    nombreEst[numEst]=est;

    for (int i = 0; i < numeroNotas-1; i++)
    {
        notas[numEst][i]=cal[i];
    }
    notas[numEst][numeroNotas-1]=notas[numEst][0]*0.2+notas[numEst][1]*0.3+notas[numEst][2]*0.15+notas[numEst][3]*0.35;
    numEst++;    
}

void NotasCurso::mayor_menor(bool sel,int col,float &nota,string &est){
    float temp=notas[0][col];
    string tempEst=nombreEst[0];
  
        for (int i = 1; i < numEst; i++)
        {
            if(notas[i][col]>temp && sel){
                temp=notas[i][col];
                tempEst=nombreEst[i];
            }
            else if(notas[i][col]<temp && !sel){
                temp=notas[i][col];
                tempEst=nombreEst[i];
                cout<<tempEst<<endl;
            }
        }      
  
    nota=temp;
    est=tempEst;
}

void NotasCurso::eliminar(string est){
    int pos;
    for (int i = 0; i < numEst; i++)
    {
        if(nombreEst[i]==est){
            pos=i;
            break;
        }
    }
    
    
    //parcial[pos]=0.0;
    //estudiante[pos]="";
    int temp;
    if(pos==(numEst-1)){
        numEst--;
    }
    else{

        for (int i = pos; i < numEst; i++)
        {
            for (int j = 0; j < numeroNotas; i++)
            {
                notas[i][j]=notas[i+1][j];
                notas[i+1][j]=0.0;
            }
            nombreEst[i]=nombreEst[i+1];
            nombreEst[i+1]="";
        }  
        numEst--;   
    }

}