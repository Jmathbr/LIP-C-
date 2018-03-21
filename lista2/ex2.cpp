#include <iostream>
using namespace std;

int main(){
    int a,b,dva,dvb;
    
    cout<<"informe dois numeros inteiros positivos maiores que zero"<<endl;
    cin>>a;
    cin>>b;
    dva = a%2;
    dvb = b%2;
    if(a>0 && b>0){
        if(dva == 0 && dvb == 0){
            cout<<"ambos sao pares"<<endl;
        }

        if(dva != 0 && dvb != 0){
            cout<<"ambos sao impares"<<endl;
        }

        if(dva != 0 && dvb == 0){
            cout<<"O primeiro número informado é ímpar. O segundo número informado é par”"<<endl;
        }

        if(dva == 0 && dvb != 0){
            cout<<"O primeiro número informado é par. O segundo número informado é ímpar"<<endl;
        }
    }
}