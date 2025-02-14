#include<iostream>

using namespace std;

class Numeros
{
public:
    int A,B,C;
    void inicializar();
    void encontrarMayor();
    void encontrarMenor();
};

void Numeros::inicializar(){
    cout<<"Ingrese A: "<<endl;
    cin>>A;
    cout<<"Ingrese B: "<<endl;
    cin>>B;
    cout<<"Ingrese C: "<<endl;
    cin>>C;
}


void Numeros::encontrarMayor(){
    if(A!=B && A!=C && C!=B){
        if (C>A && C>B)
        {
            cout<<"C es Mayor";
        }
        else if(A>B){
            cout<<"A es Mayor";
        }
        else{
            cout<<"B es Mayor";
        }
    }
    else if(A==B && A!=C){
        if(A>C){
            cout<<"A y B Mayores";
        }
        else{
            cout<<"Ojo";
            cout<<"C es Mayor";
        }    
    }  
    else if(A==C && A!=B){
        if(A>B){
            cout<<"A y C Mayores";
        }
        else{
            cout<<"B es Mayor";
        }    
    }  
    else if(C==B && B!=A){
        if(A>C){
            cout<<"B y C Mayores";
        }
        else{
            cout<<"A es Mayor";
        }    
    }
    else{
        cout<<"Son iguales";
    }
    

}

void Numeros::encontrarMenor(){
    if(A!=B && A!=C && C!=B){
        if (C<A && C<B)
        {
            cout<<"C es Menor";
        }
        else if(A<B){
            cout<<"A es Menor";
        }
        else{
            cout<<"B es Menor";
        }
    }
    else if(A==B && A!=C){
        if(A<C){
            cout<<"A y B Menores";
        }
        else{
            cout<<"C es Menor";
        }    
    }  
    else if(A==C && A!=B){
        if(A<B){
            cout<<"A y C Menores";
        }
        else{
            cout<<"B es Menor";
        }    
    }  
    else if(C==B && B!=A){
        if(A<C){
            cout<<"B y C Menores";
        }
        else{
            cout<<"A es Menor";
        }    
    }
    else{
        cout<<"Son iguales";
    }
    

}
