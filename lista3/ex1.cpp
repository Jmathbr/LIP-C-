#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float con,aux,amst,vol,ph,pol,result =0.0;
    int col;
    cout<<"Informe a quantidade de coliformios totais: ";
    cin>>col;
    cout<<"Informe o volume da amostra: ";
    cin>>amst;
    cout<<"Informe o volume total do reservatorio: ";
    cin>>vol;
    cout<<"Informe o PH da agua: ";
    cin>>ph;
    if(col< 1000){
        pol = 1;
    }
    if(col >= 1000 && col < 2000 ){
        pol = 2;
    }
    if(col>= 2000 && col < 3000){
        pol = 3;
    }
    if(col>= 3000 && col < 4000){
        pol = 4;
    }
    if(col>= 4000){
        pol = 5;
    }
    //sqrt((n*vol*ph)/100)
    for (int n = 1;n <= pol; n++){

        aux = sqrt(n*vol*ph);
        result = result + (aux/100);
        cout<<result<<endl;
    }
    cout<<"Quantidade de Cloro que deve ser colocado no reservatorio: ";
    cout<<result;




    return 0;
}