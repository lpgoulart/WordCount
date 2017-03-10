#include <cstring>
#include "library.h"
#include <iostream>
using namespace std;

void letram(int vc[25], const std::string& frase){
    int ascii = 97;//minusculo
    int tamanho = frase.length();
    
    for(int i=0;i<=25;i++){
       for(int j=0; j< tamanho;j++){
            if(frase[j] == ascii) vc[i]++;
        }
        ascii++;
    }  

}

