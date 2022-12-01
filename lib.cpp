#include "primalibreria.h"

int numeroprimo (int a, int b) {
    if (a%b!=0) {
        b--;
        if (b>1){
            numeroprimo(a,b);
        }
        if(b==2) return 1;
    }
    else return 0;
}

