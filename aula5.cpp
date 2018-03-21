#include <iostream>
using namespace std;

int main (){
    int all,cod;
    float nota,result;
    result = 0;
    cod = 1;
    cout<<"Informe a quantidade de alunos na classe: ";
    cin >> all;
    cin>> cod;
    while(cod != 0){
        for(int i = 1; i<=all ; i++){
            cout<<"Informe a nota: ";
            cin>>nota;
            result = nota + result;
            cout<<i;
            cod = 0;
        }
    }
    result = result/all;
    cout<<result;
    return 0;
}