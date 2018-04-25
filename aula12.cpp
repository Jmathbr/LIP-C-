//Funcoes recursivas

#include <iostream>
using namespace std;

long double fib(int x){
    if(x == 1){
        return 0;
    }
    if(x == 2){
        return 1;
    }
    else{
        return fib(x-1)+fib(x-2);
    }
}

int main(){
    int x;
    cin>>x;
    cout<<(fib(x));
}