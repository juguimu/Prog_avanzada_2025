#include<iostream>

using namespace std;

int main(){
    //int edad[6];

    int edad[]={1,2,3,4,5,6};//[1 2 3 4 5 6]

    /* for (int i = 0; i < 6; i++)
    {
        cout<<"Ingrese la edad del estudiante "<<i+1<<": ";
        cin>>edad[i];
    } */

    for (int i = 0; i < 6; i++)
    {
        cout<<"Edad pos "<<i+1<<": "<<edad[i]<<endl;
    }
    
    return 0;
}