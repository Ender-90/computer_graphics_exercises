#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    int min, max;    
} maxmin;

maxmin searchMinMax(int * arr, int arrayLength);
void fillIntArray (int * arrayToFill, int arrayLength);
void showArray (int * arrayToShow, int arrayLength);

int main(){
    
    srand(time(NULL));
    int size = 6;
    int * arr;
    arr = calloc(size, sizeof(int));
    
    fillIntArray(arr, size);
    
    maxmin mm1 = searchMinMax(arr, size);
    
    showArray(arr, size);
    
    printf("Min: %d\nMax: %d", mm1.min, mm1.max);

    return 0;
}

maxmin searchMinMax(int * arr, int arrayLength){
    maxmin result;
    result.min = result.max = *arr;
    
    int i;
    
    for(i = 0; i < arrayLength; i++){
        if(*(arr + i) > result.max){
            result.max = *(arr + i);
        }
        if(*(arr + i) < result.min){
            result.min = *(arr + i);
        }
    }
    
    return result;
}

void fillIntArray (int * arrayToFill, int arrayLength){
    int i;
    for(i = 0; i < arrayLength; i++){
        *(arrayToFill + i) = rand() % 40;
    }
}

void showArray (int * arrayToShow, int arrayLength){
    
    int i;
    for(i = 0; i < arrayLength; i++){
        printf("%d ", *(arrayToShow  + i));
    }
    printf("\n");
}
