#include <cstring>
#include "library.h"
#include <iostream>
using namespace std;

void numero(int vN[10], const std::string& frase){
    int ascii = 48;
    int tamanho = frase.length();
    for(int i=0;i<=10;i++){
       for(int j=0; j< tamanho;j++){
            if(frase[j] == ascii) vN[i]++;
        }
        ascii++;
    }

}
