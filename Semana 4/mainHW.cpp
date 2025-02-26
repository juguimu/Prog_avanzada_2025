#include<iostream>
#include"Holamundo.h"

using namespace std;

Holamundo saludo;

float sumain(float,float);

int main(){
    float a,b;
    cout<<saludo.hw()<<endl;
    cout<<"Ingrese A"<<endl;
    cin>>a;
    cout<<"Ingrese B"<<endl;
    cin>>b;
    cout<<"La suma es: "<<saludo.suma(a,b)<<endl;
    cout<<"La sumain es: "<<sumain(a,b)<<endl;
    return 0;
}

float sumain(float a, float b){
    return a+b;
}