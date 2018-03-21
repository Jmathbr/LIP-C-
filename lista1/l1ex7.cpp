#include <iostream>
using namespace std;

int main(){
    int x ;
    cin >> x;
    if(x>9999 && x<99999){
        int n1,n2,n3,n4,n5;
        n1 = x/10000;//ok
        n2 = (x%10000)/1000;
        n3 = x%1000/100;
        n4 = x%100/10;
        n5 = x%10/1;
        cout<<n1<<endl;
        cout<<n2<<endl;
        cout<<n3<<endl;
        cout<<n4<<endl;
        cout<<n5<<endl;
        cout<<n1<<"   "<<n2<<"   "<<n3<<"   "<<n4<<"   "<<n5<<"   ";
    }
    else{
        cout<< "numero nao valido";
    }
    return 0;
}