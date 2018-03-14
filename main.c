#include <stdio.h>
#include <stdlib.h>

#include "code/simple_array_lib.h"

#include "code/ex_01.h"
#include "code/ex_02.h"


int main()
{

    // Exercise no. 1 test

    int size = 5;
    int * tab;
    tab = calloc(size, sizeof(int));

    showArray(tab, size);
    fillIntArray(tab, size);
    showArray(tab, size);
    Inverse(tab, size);
    showArray(tab, size);

    printf("\n\n");

    // Exercise no. 2 test

    complexNumb cNumb1 = {5, 6};
    complexNumb cNumb2 = {7, -9};

    complexNumb cNumb3 = add(cNumb1, cNumb2);

    showComplex(cNumb3);

    printf("\n\n");

    // Excercise no. 3 test

    printf("%f", power(2,-4));

  return 0;

}
