#include<iostream>

using namespace std;

class Ejercicios
{
public:
    float media_3(float);
    float suma();
    void mostrar();
    int digfinal();
    float operaciones();
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
    cout<<"ultimo digito: "<<digfinal()<<endl;
    cout<<"Operacion: "<<operaciones()<<endl;
}

float Ejercicios::media_3(float sum){
    return sum/3;
}

int Ejercicios::digfinal(){
    int num;
    cout<<"Ingrese el número: "<<endl;
    cin>>num;
    return num%10;
}

float Ejercicios::operaciones(){
    char c;
    float num1,num2;
    float resultado;
    cout<<"Ingrese el tipo operación: ";
    cin>>c;
    cout<<"Ingrese num1"<<endl;
    cin>>num1;
    cout<<"Ingrese num2"<<endl;
    cin>>num2;


    switch (c)
    {
    case '+':
        resultado=num1+num2;
        break;
    case '-':
        resultado=num1-num2;
        break;
    case '*':
        resultado=num1*num2;
        break;
    case '/':
        if (num2!=0.0)
        {
            resultado=num1/num2;
        }
        else{
            cout<<"No es posible dividir por cero"<<endl;
            resultado=0;
        }        
        break;
    default:
        cout<<"Seleccion invalida"<<endl;
        resultado=0;
        break;
    }
    return resultado;
}