#include<string>

using namespace std;

class Holamundo
{
public:
    string hw();
    float suma(float,float);
};

string Holamundo::hw(){
    return "Hola Mundo!";

}

float Holamundo::suma(float a, float b){
    return a+b;
}

