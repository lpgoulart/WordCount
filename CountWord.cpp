#include <iostream>
#include <cstring>
using namespace std;

void imprimir(int vetc[25], int vetC[25],int vetN[10]){
    int ascii = 97;
    for(int i=0; i <= 25; i++){
            if(vetc[i]!=0){
            cout << char(ascii) << ": ";
            cout << vetc[i] << " ";
        }
        ascii++;
    }    
    cout << endl; 
    ascii = 65;
    for(int i=0; i <= 25; i++){
        if(vetC[i]!=0){
            cout << char(ascii) << ": ";
            cout << vetC[i] << " ";
        }
        ascii++;
    }
    cout << endl; 
    ascii = 48;
    for(int i=0; i < 10; i++){
        if(vetN[i]!=0){
            cout << char(ascii) << ": ";
            cout << vetN[i] << " ";
        }
        ascii++;
    }
}

void letram(int vetc[25], string name){
    int ascii = 97; //minusculo
    int tamanho = name.length();
    for(int i=0;i<=25;i++){
       for(int j=0; j< tamanho;j++){
            if(name[j] == ascii) vetc[i]++;
        }
        ascii++;
    }
    
}

void letraM(int vetC[25], string name){
    int ascii = 65;//maiusculo
    int tamanho = name.length();
    
    for(int i=0;i<=25;i++){
       for(int j=0; j< tamanho;j++){
            if(name[j] == ascii) vetC[i]++;
        }
        ascii++;
    }
    
    
}

void numero(int vetN[10],string name){
    int ascii = 48;
    int tamanho = name.length();
    for(int i=0;i<=10;i++){
       for(int j=0; j< tamanho;j++){
            if(name[j] == ascii) vetN[i]++;
        }
        ascii++;
    }
    
}
    
    
int main() {
    
    string name;
    int vetC[25] = {0,0,0,0,0,
                  0,0,0,0,0,
                  0,0,0,0,0,
                  0,0,0,0,0,
                  0,0,0,0,0};
    
    int vetc[25] = {0,0,0,0,0,
                  0,0,0,0,0,
                  0,0,0,0,0,
                  0,0,0,0,0,
                  0,0,0,0,0};
    
    int vetN[10] = {0,0,0,0,0,
                   0,0,0,0,0};
    
    getline(cin, name);
    
    
    numero(vetN,name);
    letram(vetc,name);
    letraM(vetC,name);    
    imprimir(vetc,vetC,vetN);
    
    return 0;
}


