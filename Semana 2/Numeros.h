#include<iostream>

using namespace std;

class Numeros
{
public:
    int A,B,C;
    void inicializar();
    void encontrarMayor();
    void encontrarMenor();
    void encontrarIguales();
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
            cout<<"C es Mayor"<<endl;
        }
        else if(A>B){
            cout<<"A es Mayor"<<endl;
        }
        else{
            cout<<"B es Mayor"<<endl;
        }
    }
    else if(A==B && A!=C){
        if(A>C){
            cout<<"A y B Mayores"<<endl;
        }
        else{
            cout<<"C es Mayor"<<endl;
        }    
    }  
    else if(A==C && A!=B){
        if(A>B){
            cout<<"A y C Mayores"<<endl;
        }
        else{
            cout<<"B es Mayor"<<endl;
        }    
    }  
    else if(C==B && B!=A){
        if(A>C){
            cout<<"B y C Mayores"<<endl;
        }
        else{
            cout<<"A es Mayor"<<endl;
        }    
    }
    else{
        cout<<"Son iguales"<<endl;
    }
    

}

void Numeros::encontrarMenor(){
    if(A!=B && A!=C && C!=B){
        if (C<A && C<B)
        {
            cout<<"C es Menor"<<endl;
        }
        else if(A<B){
            cout<<"A es Menor"<<endl;
        }
        else{
            cout<<"B es Menor"<<endl;
        }
    }
    else if(A==B && A!=C){
        if(A<C){
            cout<<"A y B Menores"<<endl;
        }
        else{
            cout<<"C es Menor"<<endl;
        }    
    }  
    else if(A==C && A!=B){
        if(A<B){
            cout<<"A y C Menores"<<endl;
        }
        else{
            cout<<"B es Menor"<<endl;
        }    
    }  
    else if(C==B && B!=A){
        if(A<C){
            cout<<"B y C Menores"<<endl;
        }
        else{
            cout<<"A es Menor"<<endl;
        }    
    }
    else{
        cout<<"Son iguales"<<endl;
    }
    

}


void Numeros::encontrarIguales(){

    
}