#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "libraries/graphicMath.h"

void exOne();

int main()
{
    exOne();

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
