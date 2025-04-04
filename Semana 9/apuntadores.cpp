#include<iostream>

using namespace std;

void operaciones(int,int,int*,int*);

int main(){
    int a=5;
    int suma,resta;
    int *ptr=nullptr;
    ptr=&a;
    int *ptr_b=&suma;
    int x[]={1,2,3};
    int *ptr_x=nullptr;

    int *ptr_j=new int;

    *ptr_j=2;
    ptr_x=x;

    cout<<"Valor: "<<*ptr_j<<endl;
    cout<<"Pos Memoria: "<<ptr<<endl;

    operaciones(2,3,&suma,&resta);
    //*ptr_b=65;
    cout<<"Suma: "<<*ptr_b<<endl;
    cout<<"Resta: "<<resta<<endl;

    //ejemplo arreglo

    cout<<"-------------------------"<<endl;
    cout<<"pos Memoria ptr: "<<ptr_x[2]<<endl;
    cout<<"pos Memoria x: "<<x[2]<<endl;


    return 0;
}

void operaciones(int a, int b,int *suma,int *resta){

    *suma = a+b;
    *resta = a-b;

}