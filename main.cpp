#include <iostream>
#include "lib.h"

int main(){
 int a, b;
    cin >> a;
    b = a - 1;
    if (numeroprimo (a,b) == true) {
        cout << "numero primo";
    } else if (numeroprimo (a,b) == false) {
        cout << "numero non primo";
    }
    return 0;
}
