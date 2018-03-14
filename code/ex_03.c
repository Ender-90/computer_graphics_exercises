#include <stdio.h>

float power(int a, int n){

    float result = 1;
    int i;

    if (n > 0){
        for(i = 0; i < n; i++){
            result *= a;
        }
    } else if (n < 0){
        for(i = 0; i < (n * (-1)); i++){
            result *= a;
        }

        result = 1 / result;

    }

    return result;
}
