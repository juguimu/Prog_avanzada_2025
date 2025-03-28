#include <iostream>
#include<string>
#include<iomanip>

//Ejercicios

//Validación
/*
-Que pasa cuando el tamaño del vector sea 0
-que pasa si ingresan una nota fuera de rango
-que pasa si el nombre se un estudiante es un string vacio
*/
//forma
/*
-Diseño de la tabla
-Diseño del resumen
*/

//testeo

/*
--verifique si las notas estan el rango correcto
--verifique los valores del resumen
--verifique si no cadenas de caracteres vacias en los nombres 
*/






using namespace std;

class Notas
{
private:
    string estudiante[50];
    float parcial[50];
    int tam;
public:
    Notas(string[],float[],int);
    void ordenar(bool);
    void imprimir();
    void eliminar(string);
    float mayor_menor(bool);
    void resumen();
    float promedio();
    void aprobacion(int&,int&);
    void agregar();//Ojo! terminar
};

Notas::Notas(string nombres[],float notas[],int n)
{
    for (int i = 0; i < n; i++)
    {
        //cout << "Estudiante " << i << ": ";
        //cin >> estudiante[i];
        estudiante[i]=nombres[i];
        //cout << "Nota: ";
        //cin >> parcial[i];
        parcial[i]=notas[i];
    }
    tam = n;
}


void Notas::ordenar(bool ad)
{
    float temp;
    string estudianteTemp;
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
                    estudianteTemp = estudiante[i];
                    estudiante[i] = estudiante[i + 1];
                    estudiante[i + 1] = estudianteTemp;
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
                    estudianteTemp = estudiante[i];
                    estudiante[i] = estudiante[i + 1];
                    estudiante[i + 1] = estudianteTemp;
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

void Notas::eliminar(string est){
    int pos;
    for (int i = 0; i < tam; i++)
    {
        if(estudiante[i]==est){
            pos=i;
            break;
        }
    }
    
    
    //parcial[pos]=0.0;
    //estudiante[pos]="";
    int temp;
    if(pos==(tam-1)){
        tam--;
    }
    else{

        for (int i = pos; i < tam; i++)
        {
            parcial[i]=parcial[i+1];
            parcial[i+1]=0.0;
            estudiante[i]=estudiante[i+1];
            estudiante[i+1]="";
        }  
        tam--;   
    }

}

float Notas::mayor_menor(bool sel){
    float temp=parcial[0];
  
        for (int i = 1; i < tam; i++)
        {
            if(parcial[i]>temp && sel)temp=parcial[i];
            else if(parcial[i]<temp && !sel)temp=parcial[i];
        }      
  
    return temp;
}

void Notas::resumen(){
    int numAprob;
    int porcAprob;
    cout<<"La nota mayor es: "<<mayor_menor(true)<<endl;
    cout<<"La nota menor es: "<<mayor_menor(false)<<endl;
    cout<<"El promedio es: "<<promedio()<<endl;
    aprobacion(numAprob,porcAprob);
    cout<<"Numero de estudiantes aprobados: "<<numAprob<<endl;
    cout<<"El promedio es: "<<porcAprob<<"%"<<endl;
}

float Notas::promedio(){
    float sum=parcial[0];
    for (int i = 1; i < tam; i++)
    {
        sum+=parcial[i];
    }
    return sum/tam;   
}

void Notas::aprobacion(int &numeroAprobados,int &procentajeAprobados){
    int cont=0;
    
    for (int i = 0; i < tam; i++)
    {
        if(parcial[i]>=3.0)cont++;
    }

    numeroAprobados=cont;
    procentajeAprobados=(cont*100)/tam;
    
}