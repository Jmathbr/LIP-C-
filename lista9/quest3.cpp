#include <iostream>
#include <cstring>
#define max 50
#define max_placa 10
using namespace std;

struct Ticket{
    int dia;
    int mes;
    int hora;
    int minutos;
    char placa[max_placa];

};
int main(){
    Ticket ticket[max];
    int n;
    int diafixo,mesfixo;
    cout<<"Numero de Veiculos: ";
    cin>>n;
    cout<<"Data: "<<endl;
    cout<<" Dia: ";
    cin>>diafixo;
    cout<<" Mes: ";
    cin>>mesfixo;
    for (int i=0;i<n;i++){

        ticket[i].dia =diafixo;
        ticket[i].mes =mesfixo;

        cin.ignore();
        cout<<"Carro: "<<i<<" Placa: ";
        cin.getline(ticket[i].placa,max_placa);
        //Tratamento de Horas
        cout<<" Hora: ";
        cin>>ticket[i].hora;
        while(ticket[i].hora>24){
            cout<<"Horas Invalida. Repita."<<endl;
            cout<<" Hora: ";
            cin>>ticket[i].hora;
        }
        //Tratamento de Minutos
        cout<<" Minutos: ";
        cin>>ticket[i].minutos;
        while(ticket[i].minutos>60){
            cout<<"Horas Invalida. Repita."<<endl;
            cout<<" Minutos: ";
            cin>>ticket[i].minutos;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

        }
    }
}