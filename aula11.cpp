#include <iostream>
using namespace std;

int funcparametro(int a){
    a= 10;
    return(a);
}



int main(){
    int a = 20;
    funcparametro(a);
    cout<<a;
}