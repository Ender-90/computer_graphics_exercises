#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int checkIfNumberInArray(int * arr, int arrayLength, int n);
void fillIntArray (int * arrayToFill, int arrayLength);
void showArray (int * arrayToShow, int arrayLength);

int main(){
    
    srand(time(NULL));
    int size = 20;
    int * arr;
    arr = calloc(size, sizeof(int));
    
    fillIntArray(arr, size);
    int a = rand() % 20;
    
    showArray(arr, size);
    printf("%d\n", a);
    printf("%d\n",checkIfNumberInArray(arr, size, a));
    
    
    return 0;
}

int checkIfNumberInArray(int * arr, int arrayLength, int n){
    int result = -1;
    int i;
    
    for (i = 0; i < arrayLength; i++){
        if(n == *(arr + i)){
            result = i;
            break;
        }
    }
    
    return result;
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
