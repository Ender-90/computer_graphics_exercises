#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "libraries/graphicMath.h"

void exOne();
void exTwo();
void exThree();
void exFour();
void exFive();

int main()
{
//    exOne();
//    exTwo();
//    exThree();
//    exFour();

    exFive();

    return 0;
}

void exOne(){

    printf("\n===================\n====Exercise=01====\n===================\n");

    cartesianPoint cartPoint = { 1, 2, 3};
    displayCartesian(cartPoint);

    cylindricalPoint cylinPoint;
    cylinPoint = toCylindrical(cartPoint);
    displayCylidrical(cylinPoint);

    sphericalPoint spherPoint;
    spherPoint = toSpherical(cartPoint);
    displaySpherical(spherPoint);

}

void exTwo(){

    printf("\n===================\n====Exercise=02====\n===================\n");

    vectorThreeDim testVector = { 4, -2, 3};
    displayVectorThree(testVector);

    vectorThreeDim normalizedTestVector = normalizeVectorThree(testVector);
    displayVectorThree(normalizedTestVector);

}

void exThree(){

    printf("\n===================\n====Exercise=03====\n===================\n");

    vectorTwoDim testV1 = {3, 2};
    vectorTwoDim testV2 = { -2, 7};

    calculateAngleBetweenVectorsTwo(testV2, testV1);
}

void exFour(){

    printf("\n===================\n====Exercise=04====\n===================\n");

    vectorThreeDim testV1 = {-2, 3, 2};
    vectorThreeDim testV2 = {1, 1, 3};

    vectorThreeDim sumOfV1AndV2 = addVectorsThree(testV1, testV2);
    displayVectorThree(sumOfV1AndV2);

    double resultOfScalarMult = scalarMultVectorsThree(testV1, testV2);
    printf("\n Result of scalar multiplication two vectors is equal to %f\n", resultOfScalarMult);

    vectorThreeDim resultOfVectorMult = vectorMultVectorsThree(testV1, testV2);
    displayVectorThree(resultOfVectorMult);
}

void exFive(){

     printf("\n===================\n====Exercise=05====\n===================\n");

     matrix3x2 testM1 = {8, 7, 6, 5, 4, 3};
     matrix2x3 testM2 = {1, 2, 3, 4, 5, 6};

     displayM32(testM1);
     displayM23(testM2);

     matrix2x2 result2 = multMatrices32x23(testM1,testM2);
     printf("\n\n M1 x M2 \n");
     displayM22(result2);

     matrix3x3 result3 = multMatrices23x32(testM2,testM1);
     printf("\n\n M2 x M1 \n");
     displayM33(result3);

}
