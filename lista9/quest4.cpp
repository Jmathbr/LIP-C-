#include <iostream>
#include <cstring>
#define max 30
using namespace std;
struct Ponto{
    int x;
    int y;
    bool key;
};

struct Rect{
    Ponto referenc;
    int largura;
    int comprimento;
};

int main(){
    Ponto ponto[max];
    Rect rect;
    int cont=0,n;
    int maxx,maxy;
    cout<<"Reference rect: "<<endl;
    
    cout<<" X: ";
    cin>>rect.referenc.x;
    cout<<" Y: ";
    cin>>rect.referenc.y;
    rect.referenc.key = true;
    
    cout<<" Largura: ";
    cin>>rect.largura;
    maxy = (rect.largura + rect.referenc.y);
    cout<<" Comprimento: ";
    cin>>rect.comprimento;
    maxx = (rect.comprimento + rect.referenc.x);
    cout<<endl;
    
    
    cout<<"Numero de Pontos: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i<<" Reference Ponto: "<<endl;
        cout<<" X: ";
        cin>>ponto[i].x;
        cout<<" Y: ";
        cin>>ponto[i].y;
        cout<<endl;

        if(ponto[i].x > rect.referenc.x && ponto[i].x < maxx){
            if(ponto[i].y > rect.referenc.y && ponto[i].y < maxy){
                ponto[i].key = true;
                cont++;
            }
            else{
                ponto[i].key = false;
            }
        }
        else{
            ponto[i].key = false;
        }
    }
    cout<<"Pontos dentro: "<<cont;
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<"Reference Ponto: ";
        cout<<" X: ";
        cout<<ponto[i].x;
        cout<<" Y: ";
        cout<<ponto[i].y;
        cout<<" Dentro: ";
        cout<<ponto[i].key;
        cout<<endl;
    }



}