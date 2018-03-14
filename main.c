#include <stdio.h>
#include <stdlib.h>

#include "code/simple_array_lib.h"

#include "code/ex_01.h"
#include "code/ex_02.h"
#include "code/ex_03.h"
#include "code/ex_04.h"
#include "code/ex_05.h"
#include "code/ex_06.h"
#include "code/ex_07.h"

void exerOneTest();
void exerTwoTest();
void exerThreeTest();
void exerFourTest();
void exerFiveTest();
void exerSixTest();
void exerSevenTest();


int main(){

    exerOneTest();
    exerTwoTest();
    exerThreeTest();
    exerFourTest();
    exerFiveTest();
    exerSixTest();
    exerSevenTest();

    return 0;

}

void exerOneTest(){

    // Exercise no. 1 test

    printf("Exercise no. 1 \n\n");

    int size = 5;
    int * tab;
    tab = calloc(size, sizeof(int));

    showArray(tab, size);
    fillIntArray(tab, size);
    showArray(tab, size);
    Inverse(tab, size);
    showArray(tab, size);

    printf("\n\n");

}

void exerTwoTest(){

    // Exercise no. 2 test

    printf("Exercise no. 2 \n\n");

    complexNumb cNumb1 = {5, 6};
    complexNumb cNumb2 = {7, -9};

    complexNumb cNumb3 = add(cNumb1, cNumb2);

    showComplex(cNumb1);
    showComplex(cNumb2);
    showComplex(cNumb3);

    printf("\n\n");

}

void exerThreeTest(){

    // Exercise no. 3 test

    printf("Exercise no. 3 \n\n");

    printf("%f", power(2,-4));

    printf("\n\n");
}

void exerFourTest(){

    // Exercise no. 4 test

    printf("Exercise no. 4 \n\n");

    int size = 6;
    int * arr;
    arr = calloc(size, sizeof(int));

    fillIntArray(arr, size);

    maxmin mm1 = searchMinMax(arr, size);

    showArray(arr, size);

    printf("Min: %d\nMax: %d", mm1.min, mm1.max);

    printf("\n\n");
}

void exerFiveTest(){

    // Exercise no. 5 test

    printf("Exercise no. 5 \n\n");

    srand(time(NULL));

    int a = rand() % 50;

    printf("Is number %d even?\n", a);

    if(isEven(a) == 1){
        printf("Yup!");
    } else {
        printf("Nope!");
    }

    printf("\n\n");
}

void exerSixTest(){

    // Exercise no. 6 test

    printf("Exercise no. 6 \n\n");

    int size = 20;
    int * arr;
    arr = calloc(size, sizeof(int));

    fillIntArray(arr, size);
    int a = rand() % 20;

    showArray(arr, size);
    printf("%d\n", a);
    printf("%d\n",checkIfNumberInArray(arr, size, a));

    printf("\n\n");
}

void exerSevenTest(){

    // Exercise no. 7 test

    printf("Exercise no. 7 \n\n");


    int * firstArray;
    int * secondArray;
    int size = 10;

    firstArray = calloc(size, sizeof(int));
    secondArray = calloc(size, sizeof(int));

    fillIntArray(firstArray, size);
    showArray(firstArray, size);

    rewrite(firstArray, secondArray, size);

    showArray(secondArray, size);

    printf("\n\n");
}
