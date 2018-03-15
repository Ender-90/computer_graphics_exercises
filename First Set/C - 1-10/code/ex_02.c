#include <stdio.h>
#include <stdlib.h>

#include "ex_02.h"

complexNumb add(complexNumb c1, complexNumb c2){
    complexNumb result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}

void showComplex(complexNumb c){

    printf("%f ",c.real);

    if(c.imaginary >= 0){
        printf(" + %fi", c.imaginary);
    } else {
        printf(" - %fi", (c.imaginary*(-1)));
    }

    printf("\n");
}
