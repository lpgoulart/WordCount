#include <iostream>
#include <cstring>
#include "library.h"
using namespace std;

int main() {
    
    string frase;
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

    int *vC;
    int *vc;
    int *vn;

	vC = vetC;
	vc = vetc;
	vn = vetN;    

    getline(cin,frase);
    
    
    numero(vn,frase);
    letram(vc,frase);
    letraM(vC,frase);    
    imprimir(vetc,vetC,vetN);
    
    return 0;
}

