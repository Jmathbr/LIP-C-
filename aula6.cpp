#include <iostream>
using namespace std;

int main(){
    bool key = true;
    int valor, maior, menor;
    maior= valor;
    menor = valor;
    for(int i = 0; i < 3;i++){
        cin>>valor;
        if(valor>maior){
            maior = valor;
        }
    }
    cout<<"maior valor: ";
    cout<<maior;

}