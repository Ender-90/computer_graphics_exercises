#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "libraries/graphicMath.h"

void exOne();
void exTwo();
void exThree();

int main()
{
    exOne();
    exTwo();

    exFour();

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

    vectorThreeDim normalizedTestVector;
    normalizedTestVector = normalizeVectorThree(testVector);
    displayVectorThree(normalizedTestVector);

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
