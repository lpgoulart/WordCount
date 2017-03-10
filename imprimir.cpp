#include "library.h"
#include <iostream>
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
cout << endl;
}
