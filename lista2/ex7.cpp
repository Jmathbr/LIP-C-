#include <iostream>
using namespace std;

int main(){
    int t,aux,n;
    cout<<"escreva o numero de numeros: ";
    cin>>t;
    aux = t;
    for(;t>1;t--){
        cin>>n;
        aux = aux + n;
    }

    cout<<aux;
}