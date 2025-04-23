#include<iostream>
#include<vector>

using namespace std;



int main(){
     
    vector<int> v={1,2,3,4,10};

    cout<<"V: "<<v[0]<<endl;
    cout<<"V: "<<v.at(0)<<endl;
    cout<<"V: "<<*(v.begin())<<endl;
    cout<<"V: "<<*(v.end()-1)<<endl;
    cout<<"size V: "<<v.size()<<endl;
    
    return 0;
}