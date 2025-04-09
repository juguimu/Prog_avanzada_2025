#include<iostream>

using namespace std;



int vector[]={1,2,3,14};



int main(){

    int tam=sizeof(vector)/sizeof(vector[0]);

    int *ptr=new int[tam];

    for (int i = 0; i < tam; i++)ptr[i]=vector[i];

    cout<<"Valor del ptr: "<<ptr[tam-1]<<endl;
    cout<<"Tamaño memoria del vector: "<<sizeof(vector)<<endl;

    return 0;
}