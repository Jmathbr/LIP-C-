#include <iostream>
#include <cmath>
using namespace std;
int baskara(float a,float b,float c,float &r1,float &r2,float &delta){
    delta = b*b-4*a*c;
    r1 = (b + sqrt(delta))/2*a;
    r2 =(b - sqrt(delta))/2*a;

}

int main(){
    float a,b,c,r1,r2,d;
    int qnt

}