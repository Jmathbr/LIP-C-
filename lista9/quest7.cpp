#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#define max 50
using namespace std;
struct Sensor{
    int cod;
    float leitura;
};
int ordem(Sensor vec[max], int n){
    int aux;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vec[j].cod>vec[i].cod){
                aux = vec[j].cod;
                vec[j].cod = vec[i].cod;
                vec[i].cod = aux;
            }
        }
    }
}
int aleatorio(Sensor sensor[max], int n){
    
    for(int i = 0; i<n;i++){
        int key = false;
        while(true){
            int x = rand()%n+1;
            for(int j = 0; j<i;j++){

                int y = sensor[j].cod;

                if(y == x){
                    key = true;
                }
            }
            if(key == false){
                return x;
                break;
            }
        }

    }
}

int binsearch(Sensor vec[max],int n, int value){
    int meio = n/2;
    int maior;
    if(value >= vec[meio].cod){
        for(int i=meio;i<n;i++){
            if(value == vec[i].cod ){
                return i;
            }
            if(i == n){
                return 0;
            }
        }
    }
    else{
        for(int i=0;i<meio;i++){
            if(value == vec[i].cod){
                return i;
            }
            if(i == meio){
                return 0;
            }
        }
    }
}
int main(){
    int n;
    int cod;
    int ran;

    srand(time(NULL));

    Sensor sensor[max];
    cout<<"Quantidade de Leituras: ";
    cin>>n;

    /*for(int i=0;i<n;i++){
        cout<<"Sensor: "<<i<<endl;
        cout<<"Codigo: ";
        cin>>sensor[i].cod;
        cout<<"Leitura: ";
        cin>>sensor[i].leitura;
    }*/

    for (int i=0;i<n;i++){
        sensor[i].leitura = (rand()%500)+1;
    }

    for(int i = 0; i<n;i++){
        if(i == 0){
            sensor[i].cod = rand()%n+1;
        }
        else{
            int key = true;
            while(key){
                int teorico = rand()%n+1;
                cout<<"value: "<<teorico<<endl;
                for(int j = 0; j<=i;j++){
                    cout<<"Cod: "<<sensor[j].cod<<" posicao: "<<j<<endl;
                    if(sensor[j].cod == teorico){
                        key = true;
                    }
                    else{
                        key = false;
                    }
                }
                if(key == false){
                    sensor[i].cod = teorico;
                    break;
                }
            }
        }
    }

    ordem(sensor,n);
    for(int i=0;i<n;i++){
        cout<<"Sensor: "<<i<<" ";
        cout<<"Codigo: ";
        cout<<sensor[i].cod;
        cout<<" Leitura: ";
        cout<<sensor[i].leitura;
        cout<<endl;
    }

}