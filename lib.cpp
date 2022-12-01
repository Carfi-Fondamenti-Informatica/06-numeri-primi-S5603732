#include "lib.h"

bool numeroprimo (int a, int b) {
    bool c=true, d=false;
    if(a==1||a==2) return c;
    if(a==4) return d;
    if(a%b != 0) {
        b--;
        if(b>1) {
            numeroprimo(a,b);
        }
        if(b==2) return c;
    } else return d;
}
