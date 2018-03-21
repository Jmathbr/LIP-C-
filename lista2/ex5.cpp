#include <iostream>
using namespace std;
int main(){
    int day;
    cout<<"informe um dia da semana de 1 a 7:";
    cin>>day;
    switch(day){
        case 1:
            cout<<"Dia nao util"<<endl;
            break;
        case 7:
            cout<<"Dia nao util"<<endl;
            break;
        default:
            cout<<"Dia util"<<endl;
            break;
    }
}