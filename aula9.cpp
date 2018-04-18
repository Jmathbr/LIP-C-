#include <iostream>
using namespace std;

int nperfect(int x){
    bool key = false;
    int aux = 0;
    for(int i = 1; i<x;i++){
        if(x%i == 0){
            aux = i + aux;
        }
    }
    if(aux == x){
        key = true;
    }
    return (key);
}

int main(){
    cout<<"Numeros Perfeitos: ";
    for(int n; n<1000; n++){
        if(nperfect(n) == true){
            cout<<n<<",";
        }
    }
}

