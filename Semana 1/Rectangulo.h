#include<iostream>

using namespace std;

class Rectangulo
{
public:
    int largo,ancho;
    void iniciarAtributos();
    void perimetro();
    void area();
};

void Rectangulo::iniciarAtributos(){

    cout<<"Ingrese el largo: "<<endl;
    cin>>largo;

    cout<<"Ingrese el ancho: "<<endl;
    cin>>ancho;


}

void Rectangulo::perimetro(){

    cout<<"El perimetro es: "<<(2*largo+2*ancho)<<endl;

    
}

void Rectangulo::area(){
    cout<<"El area es: "<<(largo*ancho)<<endl;
    
}
