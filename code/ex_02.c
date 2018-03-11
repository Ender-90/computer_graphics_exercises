#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    double real;
    double imaginary;
} complexNumb;

complexNumb add(complexNumb c1, complexNumb c2);
void showComplex(complexNumb c);

int main(){
    
    complexNumb cNumb1 = {5, 6};
    complexNumb cNumb2 = {7, -9};
    
    complexNumb cNumb3 = add(cNumb1, cNumb2);
    
    showComplex(cNumb3);
    
    return 0;
}

complexNumb add(complexNumb c1, complexNumb c2){
    complexNumb result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    
    return result;
}

void showComplex(complexNumb c){
    
    printf("%f ",c.real);
    
    if(c.imaginary >= 0){
        printf(" + %fi", c.imaginary);
    } else {
        printf(" - %fi", (c.imaginary*(-1)));
    }
    
}
