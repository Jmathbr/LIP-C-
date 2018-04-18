#include <iostream>
using namespace std;

void qr(int x, char y){
    for (int i=1; i<=x;i++){
        for(int j=1; j<=x;j++){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x;
    char y;
    cin>>x;
    cin>>y;
    qr(x,y);
}