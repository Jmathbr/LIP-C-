#include <iostream>
using namespace std;
#define max 20

/*Use um array de subscrito único para resolver o problema a seguir. Leia 20 números, cada um
entre 10 e 100 (verifique). À medida em que cada número for lido, imprima-o apenas se ele
não for uma duplicata de um número já lido. Considere a ‘pior das hipóteses’: os 20 números
são diferentes. Use o menor array possível para resolver esse problema.*/

int main(){
    int array[max],x,y=0;
    bool key;

    for(int i = 0; i<20;i++){
        key = false;
        while(true){
            cin>>x;
            if(x > 10 && x<100){
                array[i] = x;

                for(int j = 0; j<i;j++){
                    y = array[j];
                    if(y == x){
                        key = true;
                    }
                }
                if(key == false){
                    cout<<x<<" Numero UNICO"<<endl;
                }
                break;
            }
            else{
                cout<<":Numero nao aceito"<<endl;
            }

        }
    }

}