#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void showArray (int * arrayToShow, int arrayLength){

    int i;
    for(i = 0; i < arrayLength; i++){
        printf("%d ", *(arrayToShow  + i));
    }
    printf("\n");
}

void fillIntArray (int * arrayToFill, int arrayLength){

    srand(time(NULL));
    int i;
    for(i = 0; i < arrayLength; i++){
        *(arrayToFill + i) = rand() % 10;
    }
}
