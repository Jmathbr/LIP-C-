#include <iostream>
#include <cstring>
#define max 20

using namespace std;

void concaten(int v1[], int v2[]){
    int t1 = 4;
    int t2 = 10;
    int t3 = (t1 + t2);
    int v3[t3];
    int cont1=0,cont2=0;
    if(t1>t2){
        for(int i=0;i<(2*t2);i++){
            if(i%2 == 0){
                v3[i] = v2[cont2];
                cont2++;
            }
            else{
                v3[i] = v1[cont1];
                cont1++;
            }
        }
         for(int i = 2*t2;i<t3;i++){
            v3[i] = v1[t2];
            t2++;
        }
    }
    if(t2>t1){
        for(int i=0;i<(2*t1);i++){
            if(i%2 == 0){
                v3[i] = v1[cont1];
                cont1++;
            }
            else{
                v3[i] = v2[cont2];
                cont2++;
            }
        }
         for(int i = 2*t1;i<t3;i++){
            v3[i] = v2[t1];
            t1++;
        }
    }
    for(int j = 0; j<t3;j++){
        cout<<v3[j];
        cout<<endl;
    }

}

int main(){
    int v1[max] = {10,20,30,40};
    int v2[max] = {1,2,3,4,5,6,7,8,9,10};
    concaten(v1,v2);
    return 0;
}