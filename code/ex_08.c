#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double averageOfIntArray (int * inputArray, int arrayLength);
void fillIntArray (int * arrayToFill, int arrayLength);
void showArray (int * arrayToShow, int arrayLength);

int main()
{
    srand(time(NULL));
    int * firstArray;
    int size = 10;

    firstArray = calloc(size, sizeof(int));

    fillIntArray(firstArray, size);
    showArray(firstArray, size);
    printf("%f", averageOfIntArray(firstArray, size));

    return 0;
}

double averageOfIntArray (int * inputArray, int arrayLength){
    int i;
    double averageOf = 0;

    for(i = 0; i < arrayLength; i++){
        averageOf += *(inputArray + i);
    }

    return averageOf /= arrayLength;
}

void fillIntArray (int * arrayToFill, int arrayLength){
    int i;
    for(i = 0; i < arrayLength; i++){
        *(arrayToFill + i) = rand() % 20;
    }
}

void showArray (int * arrayToShow, int arrayLength){

    int i;
    for(i = 0; i < arrayLength; i++){
        printf("%d ", *(arrayToShow  + i));
    }
    printf("\n");
}
