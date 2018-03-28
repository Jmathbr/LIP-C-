#include <iostream>
using namespace std;
int main(){
    int x,y,resx = 0,resy = 0;
    cin>>x;
    cin>>y;
    for(int i=1;i<x;i++){
        if(x%i == 0){
            resx = resx + i;
        }
        
    }
    for(int j=1;j<y;j++){
        if(y%j == 0){
            resy = resy + j;
        }
    }
    cout<<resx;
    if(resx == y && resy == x){
        cout<<"ok amigos";
    }
}