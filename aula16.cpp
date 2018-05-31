#include <iostream>
#include <cstring>
#define max 50
#define maxstring 100
#define maxaluno 20
using namespace std;

struct aluno{
    char name[maxstring];
    int matricula;
};
struct professor{
    char name[maxstring];
    char form[maxstring];
    int matricula;
};
struct turma{
    char name[maxstring];
    aluno alun[maxaluno];
    professor prof;
};

int main(){
    turma turma[max];
    int qntTurmas,qntAlunos;
    cout<<"Informe a quantidade de Turmas: ";
    cin>>qntTurmas;
    for(int i=0;i<qntTurmas;i++){
        cin.ignore();
        cout<<i<<" >> Turma: ";
        cin.getline(turma[i].name,maxstring);
        cout<<endl<<" Professor: ";
        cin.getline(turma[i].prof.name,maxstring);
        cout<<" Formaçao: ";
        cin.getline(turma[i].prof.form,maxstring);
        cout<<" Matricula: ";
        cin>>turma[i].prof.matricula;
        cout<<endl<<"Informe a quantidade de alunos: ";
        cin>>qntAlunos;
        for(int j=0;j<qntAlunos;j++){
            cin.ignore();
            cout<<"Aluno "<<j<<": ";
            cin.getline(turma[i].alun[j].name,maxstring);
            cout<<" Matricula: ";
            cin>>turma[i].alun[j].matricula;
        }
    }
    
}