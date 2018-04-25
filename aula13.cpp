#include <iostream>
using namespace std;

#define max 10

int main(){
    int array[max], n;

    cin>>n;
    n = n-1;
    for (int i = 0; i<=n;i++){
        cin>>array[i];

    }
    for(int j = 0; j<=n; j++){
        cout<<array[j];
        cout<<",";

    }

    return 0;
}