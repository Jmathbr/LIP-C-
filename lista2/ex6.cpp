#include <iostream>
using namespace std;

int main(){
    int v,n100,n50,n10,n5,n1;
    cin>>v;
    n100 = v%100;
    n50 = v%50;
    n10 = v%10;
    n5 = v%5;
    n1 = v%5;
    if(n100 >= 0){
        cout<<v/100<<endl;
        if(n50 == 0){
            cout<<v/50<<endl;
        }
    }
    //cout <<n100<<endl;
    //cout <<n50<<endl;
    //cout <<n10<<endl;
    //cout <<n5<<endl;
    //cout <<n1<<endl;
}