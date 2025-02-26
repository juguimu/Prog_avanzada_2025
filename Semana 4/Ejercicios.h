#include<iostream>

using namespace std;

class Ejercicios
{
public:
    float media_3(float);
    float suma();
    void mostrar();
};

float Ejercicios::suma(){
    float a,b,c;
    cout<<"Ingrese A"<<endl;
    cin>>a;
    cout<<"Ingrese B"<<endl;
    cin>>b;
    cout<<"Ingrese C"<<endl;
    cin>>c;
    return a+b+c;
}

void Ejercicios::mostrar(){

    float sumaABC=suma();

    cout<<"la suma es: "<<sumaABC<<endl;
    cout<<"El promedio: "<<media_3(sumaABC)<<endl;
}

float Ejercicios::media_3(float sum){
    return sum/3;
}
