#include<iostream>
#include<iomanip>


using namespace std;

int m[2][3]={{1,2,3},{4,5,6}};
float notas[3][3]={{1.2,3.2,4.3},{4.0,4.5,2.3},{2.3,4.0,5.0}};


int main(){
    
    cout<<"dato: "<<m[1][1]<<endl;
    m[1][1]=10;
    cout<<"dato: "<<m[1][1]<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<setw(4)<<notas[i][j]<<" ";
        }
        cout<<endl;       
    }
    

    return 0;
}

