#include <iostream>
using namespace std;
#define max 100
/*
Uma matriz é dita de permutação se:
• Contiver apenas zeros e uns;
• A soma dos elementos de cada uma de suas linhas (isoladamente) for igual a
um;
• A soma dos elementos de cada uma de suas colunas (isoladamente) for igual
a um;
Crie uma função que recebe como parâmetro uma matriz com
dimensão 𝑚 × 𝑛 e retorne verdadeiro se esta matriz for de
permutação, e falso contrário.
*/
bool matriz(int x, int y){
    int array[max][max], line,col,contcol = 0,contline = 0;
    bool keyroot = false;
    bool keypermut = false;
    /*
    array[0][0] = 1;
    array[0][1] = 0;
    array[0][2] = 0;

    array[1][0] = 0;
    array[1][1] = 1;
    array[1][2] = 0;

    array[2][0] = 0;
    array[2][1] = 0;
    array[2][2] = 1;
    */
    //caso queira informar a matriz, e so descomentar o codigo abaixo e comentar o codigo acima
   
    for( int i = 0;i < x; i++){
            for( int j = 0;j < y; j++){
                cin>>array[i][j];
            }
        }

    for( int i = 0;i < x; i++){
        for( int j = 0;j < y; j++){
            if( array[i][j] == 1 || array[i][j] == 0){
                keypermut = true;
            }
        }
    }

    for( int i = 0;i < x; i++){
        col = 0;
        for( int j = 0;j < y; j++){
            col = array[i][j] + col;
            
        }
        if(col == 1){
                contcol++;
            }
        else{
            break;
        }
    }


    for( int i = 0;i < x; i++){
        line = 0;
        for( int j = 0;j < y; j++){
            line = array[j][i] + line;
            
        }
        if(line == 1){
                contline++;
            }
            else{
                break;
            }
    }


        for( int i = 0;i < x; i++){
            cout<<endl;
            for( int j = 0;j < y; j++){
                cout << array[j][i];
                cout<< " ";
            }
        }

    if(keypermut = true && contcol == 3 && contline == 3){
        cout<<endl;
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int x = 3,y = 3;
    cout<<matriz(x, y);

}

