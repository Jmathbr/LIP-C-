#include <iostream>
using namespace std;

int main(){
    int cont;
    float media, soma = 0.0, nota = 0.0;
    while (true ){
        soma = soma + nota;
        cont++;
        cin>>nota;
        if(nota == -1){
            break;
        }
    }
    media = soma/cont;
    cout<<media;
    return 0;
}
