#include <iostream>
#include <cstring>
#include <cmath>
#define max 50
using namespace std;
struct Ponto{
    float x;
    float y;
};
struct Circle{
    Ponto center;
    float raio;
};

int main(){
    Ponto ponto;
    Circle Circle;
    int dist;

    cout<<"Ponto: "<<endl;
    cout<<" X: ";
    cin>>ponto.x;
    cout<<" Y: ";
    cin>>ponto.y;

    cout<<"Center circle: "<<endl;
    cout<<" X: ";
    cin>>Circle.center.x;
    cout<<" Y: ";
    cin>>Circle.center.x;
    cout<<" Raio: ";
    cin>>Circle.raio;
    dist = sqrt(((ponto.x - Circle.center.x)*(ponto.x - Circle.center.x))+((ponto.y- Circle.center.y)*(ponto.y- Circle.center.y))) ;
    if(dist<Circle.raio){
        cout<<"Dentro do circulo";
    }
    else{
        cout<<"Fora do criculo";
    }
}