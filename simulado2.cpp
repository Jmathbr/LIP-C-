#include <iostream>
using namespace std;

int progres(int n, int a1, int q){
    //pg = a1 * q^n-1
    int an;
    n = n-1;
    for(int i = 1;i<=n;i++){
        q = q*q;
    }
    an = a1 * q;
    return (an);
}

int main(){
    int n,a1,q, result;
    cout<<"informe;";
    cin>>n;
    cin>>a1;
    cin>>q;
    result = progres(n,a1,q);
    cout<<result;
}