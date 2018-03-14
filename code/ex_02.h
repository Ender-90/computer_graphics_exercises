#ifndef EX_02_H
#define EX_02_H

typedef struct {
    double real;
    double imaginary;
} complexNumb;

complexNumb add(complexNumb c1, complexNumb c2);
void showComplex(complexNumb c);

#endif // EX_02_H
