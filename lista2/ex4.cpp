#include <iostream>
using namespace std;

int main(){
    cout<<"informe um numero inteiro positivo: ";
    int x,divx;
    cin>>x;
    divx = x%3;
    switch (divx){
        case 0:
            cout<<"Numero informado divisivel por 3"<<endl;
            break;
        default:
            cout<<"Numero informado nao divisivel por 3"<<endl;
            break;
    }
}