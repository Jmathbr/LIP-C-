
#include <iostream>
#include <cstdlib>
#include <ctime>
#define max 100
using namespace std;

float recursiva(int v[], int n, int i){
    if (i < n-1) {
        return v[i]/v[i+1] + recursiva(v, n, i+1);
    } else {
        return 0;
    }
}

int main(){
    int random = ((rand()%20)+1);
    int n;
    float y = 0;
    int i=0;
    cout<<"Informe o tamanho do vetor: ";
    cin>>n;
    int v[n];
    int vresult[n];
    srand(time(NULL));
    for(int k = 0; k<n;k++){    //Atribuindo numeros aleatorios ao array

        while(true){
            random = ((rand()%20)+1);
            if(random>=10 && random<=20){
                break;
            }
        }
        v[k] = random;
        cout<<v[k];
        cout<<endl;
    }

    recursiva(v,n,i);
    cout<<recursiva(v,n,i);

}