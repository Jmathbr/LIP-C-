#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"informe dois numeros reais"<<endl;
    cin>>a;
    cin>>b;
    if(a>=0 && a<=9 && b>=0 && b<=9){
        if(a==b){
            cout<<"Os numeros sao iguais"<<endl;
        }
        if(a>b){
            cout<<"'a' é maior que 'b'"<<endl;
        }
        if(b<a){
            cout<<"b' é maior que 'a'"<<endl;
        }
    }
}