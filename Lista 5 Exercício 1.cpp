#include <stdio.h>

int main (){

    assert(ehPar(8) == 1);
    assert(ehPar(7) == 0);
    assert(ehPar(0) == 1);

    return 0;
}
