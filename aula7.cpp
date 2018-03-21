#include <iostream>
using namespace std;

int qr(int x){
    x = x*x;
    return (x);
}
int main(){
    cout<<"Imprindo o valor de todos os dados ao quadrado"<<endl;
    for(int i=1;i<=10;i++){
        int aux = qr(i);
        cout<<"Quadrado de: "<<i<<" Equivale a: "<<aux<<endl;
    }
}