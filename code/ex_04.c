
#include "ex_04.h"

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
