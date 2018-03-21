#include <iostream>
using namespace std;

int main(){
    int n,nm;
    bool key = true;
    while(key == true){
        cout<<"informe um numero: ";
        cin>>n;
        nm = n-1;
        for(int i = 2;i<nm;i++){
            if(n%i == 0){
                cout<<i<<endl;
            }
            
        }
    }
}