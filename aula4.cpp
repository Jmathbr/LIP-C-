#include <iostream>
using namespace std;

int main(){
    int x,pb,pa;
    float ta,tb,dva,dvb;
    bool key = true;
    cout<<"informe o ano"<<endl;
    cin>>x;
    cout<<"informe a quantidade de brasileiros"<<endl;
    cin>>pb;
    cout<<"informe a quantidade de americanos"<<endl;
    cin>>pa;
    cout<<"informe a taxa de brasileros"<<endl;
    cin>>tb;
    cout<<"informe a taxa de americanos"<<endl;
    cin>>ta;
    dvb = tb/100;
    dva = ta/100;
    if(dva>dvb){
        cout<<"a populaçao brasileira nao ira ultrapassar";
        key = false;
    }
    while(pb<=pa){
        pb = pb + dvb * pb;
        pa = pa + dva * pa;
        x++;
    }
    cout<<"A populaçao passara no ano de :"<<x<<endl;
}



