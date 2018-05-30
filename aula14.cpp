#include <iostream>
using namespace std;

struct sensor{
    int cod;
    float temp; 
};
int main(){
    sensor s1,s2;
    cin>>s1.cod>>s1.temp;
    cin>>s2.cod>>s2.temp;
    if(s1.temp > s2.temp){
        cout<<s1.cod<<" Tem maior temperatura";
    }
    if(s2.temp > s1.temp){
        cout<<s2.cod<<" Tem maior temperatura";
    }
    else{
        cout<<"Temperatura igual";
    }
}
