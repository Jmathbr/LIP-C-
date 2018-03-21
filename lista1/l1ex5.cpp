#include <iostream>
using namespace std;

int main(){
    int r,d,c,a;
    const float pi = 3.14;
    cout<<"informe o raio do circulo:"<<endl;
    cin>>r;
    d = 2*r;
    c = 2*pi*d;
    a = pi*r*r;
    cout<<d<<endl;
    cout<<c<<endl;
    cout<<a<<endl;
    return 0;
}
