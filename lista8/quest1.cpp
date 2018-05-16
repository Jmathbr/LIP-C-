#include <iostream>
using namespace std;
#define max 100

int main(){
    int LastBackS = 0,cont = 0;
    char simbol;
    char array[max]= "Lets go girl";
    
    for(int i = 0;i<max;i++){   //Percorrer todas as possiçoes do array de char

        if(array[i] == '\0'){   //Condiçao para quando o 
            break;              //ultimo char for informado parar
        }

        cout<<i<<": ";          //Demonstraçao da posiçao de cada char no array
        cout<<array[i]<<endl;
        
        if(array[i] == ' '){    //Ultima posiçao da backspace no vetor
            LastBackS = i;      //referente ao ultimo nome digitado
        }

        if(array[i] == simbol){    //Quantidade e vezes que esse char aparece na frase
            cont++;
        }
    }
    cout<<LastBackS;
    cout<<cont;
}