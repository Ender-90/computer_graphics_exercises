#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "libraries/graphicMath.h"

void exOne();
void exTwo();

int main()
{
    exOne();
    exTwo();

    return 0;
}

void exOne(){

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

    vectorThreeDim testVector = { 4, -2, 3};
    displayVectorThree(testVector);


}
