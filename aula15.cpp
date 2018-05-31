#include <iostream>
#include <string>
using namespace std;

#define max_nome 100

struct sensor{
    int cod;
    float temp;
};

int main(){
    sensor p1;
    sensor p2;
    float media;
    cout<<"Informe o valor do primeiro sensor: ";
    p1.cod = 1;
    cin>>p1.temp;

    cout<<endl<<"Informe o valor do segundo sensor: ";
    p1.cod = 2;
    cin>>p2.temp;
    
    cout<<"Sua media de leituras foi: ";
    media =(p1.temp + p2.temp)/2;
    cout<<media<<endl;


}