 #include<iostream>

 using namespace std;
 
 
 class Procedimientos
 {

 public:
    int encontrarMayor(int,int,int);
    int encontrarMenor(int,int,int);
    void proEncontrarMayorMenor(int&,int&); 
 };
 
 int Procedimientos::encontrarMayor(int A, int B, int C){
    int mayor;
    if(A!=B && A!=C && C!=B){
        if (C>A && C>B)
        {
            //cout<<"C es Mayor"<<endl;
            mayor=C;
        }
        else if(A>B){
            //cout<<"A es Mayor"<<endl;
            mayor=A;
        }
        else{
            //cout<<"B es Mayor"<<endl;
            mayor=B;
        }
    }
    else if(A==B && A!=C){
        if(A>C){
            //cout<<"A y B Mayores"<<endl;
            mayor=A;
        }
        else{
            //cout<<"C es Mayor"<<endl;
            mayor=C;
        }    
    }  
    else if(A==C && A!=B){
        if(A>B){
            //cout<<"A y C Mayores"<<endl;
            mayor=C;
        }
        else{
            //cout<<"B es Mayor"<<endl;
            mayor=B;
        }    
    }  
    else if(C==B && B!=A){
        if(A>C){
            //cout<<"B y C Mayores"<<endl;
            mayor=C;
        }
        else{
            //cout<<"A es Mayor"<<endl;
            mayor=A;
        }    
    }
    else{
        //cout<<"Son iguales"<<endl;
        mayor=C;
    }
    return mayor;

}

void Procedimientos::proEncontrarMayorMenor(int &Mayor,int &Menor){
    int A,B,C;
    cout<<"Ingrese A: "<<endl;
    cin>>A;
    cout<<"Ingrese B: "<<endl;
    cin>>B;
    cout<<"Ingrese C: "<<endl;
    cin>>C;
    Mayor=encontrarMayor(A,B,C);
    Menor=0;
}