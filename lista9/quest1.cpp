#include <iostream>
#include <cstring>
#define max 50
using namespace std;
struct data{
    int dia;
    int mes;
    int ano;
};
int main(){
    data one,two;
    cout<<"Primeira data: ";
    cout<<endl;
    cout<<" Dia: ";
    cin>>one.dia;
    cout<<" Mes: ";
    cin>>one.mes;
    cout<<" Ano: ";
    cin>>one.ano;
    cout<<endl;

    cout<<"Segunda data: ";
    cout<<endl;
    cout<<" Dia: ";
    cin>>two.dia;
    cout<<" Mes: ";
    cin>>two.mes;
    cout<<" Ano: ";
    cin>>two.ano;
    
    if(one.ano > two.ano){
        cout<<"Primeira data";
    }
    if(two.ano > one.ano){
        cout<<"Segunda data";
    }
    else{
        if(one.mes > two.mes){
            cout<<"Primeira data";
        }
        if(two.mes > one.mes){
            cout<<"Segunda data";
        }
        else{
            if(one.dia > two.dia){
                cout<<"Primeira data";
            }
            if(two.dia > one.dia){
                cout<<"Segunda data";
            }
            else{
                cout<<"Datas iguais";
            }
        }
    }
}