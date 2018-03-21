#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int a,b,c;
    int x,y,z;
    cout<<"Entrada:"<<endl;
    cout<<"Insira o valor de 'a':";
    cin>>a;
    cout<<"Insira o valor de 'b':";
    cin>>b;
    cout<<"Insira o valor de 'c':";
    cin>>c;
    cout<<"Entrada:"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    x = a && b || c;
    y = !a || !b && c;
    z =!(a || b || c && !a);
    cout<<"Saida:"<<endl;
    cout<<"a && b || c = "<<x<<endl;
    cout<<"!a || !b && c = "<<y<<endl;
    cout<<"!(a || b || c && !a) = "<<z<<endl;
    return 0;
}
