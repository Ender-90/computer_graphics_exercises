#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rewrite(int * inputArray, int * outputArray, int arrayLength);
void fillIntArray (int * arrayToFill, int arrayLength);
void showArray (int * arrayToShow, int arrayLength);

int main()
{
    srand(time(NULL));
    int * firstArray;
    int * secondArray;
    int size = 10;

    firstArray = calloc(size, sizeof(int));
    secondArray = calloc(size, sizeof(int));

    fillIntArray(firstArray, size);
    showArray(firstArray, size);

    rewrite(firstArray, secondArray, size);

    showArray(secondArray, size);

    return 0;
}

void rewrite(int * inputArray, int * outputArray, int arrayLength){
    int i;
    for(i = 0; i < arrayLength; i++){
        if(*(inputArray + i) >= 0){
            *(outputArray + i) = *(inputArray + i);
        } else {
            *(outputArray + i) = 0;
        }
    }
}

void fillIntArray (int * arrayToFill, int arrayLength){
    int i;
    for(i = 0; i < arrayLength; i++){
        *(arrayToFill + i) = (rand() % 20) - 5;
    }
}

void showArray (int * arrayToShow, int arrayLength){

    int i;
    for(i = 0; i < arrayLength; i++){
        printf("%d ", *(arrayToShow  + i));
    }
    printf("\n");
}
