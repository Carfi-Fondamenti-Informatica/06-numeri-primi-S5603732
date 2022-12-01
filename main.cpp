#include <iostream>
#include "primalibreria.h"

int main(){
  int a, b;
    cin >> a;
    b=a-1;
    if(a==4) {
        cout<<"Falso";
        return 0;
    }
    if(a==1||a==2||a==3) {
        cout<<"Vero";
        return 0;
    }
    if (numeroprimo(a,b)==1) cout<<"Vero";
    else cout<<"Falso";
  return 0;
}
