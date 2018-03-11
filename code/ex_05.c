#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int isEven(int n);

int main(){
    
    srand(time(NULL));
    
    int a = rand() % 50;
    
    printf("Is number %d even?\n", a);
    
    if(isEven(a) == 1){
        printf("Yup!");
    } else {
        printf("Nope!");
    }
    
    return 0;
}

int isEven(int n){
    if(n % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}
