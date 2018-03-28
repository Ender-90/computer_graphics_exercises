#include "point_lib.h"
#include <math.h>

cartesianPoint cylindricalToCartesian(cylindricalPoint point){

    cartesianPoint tmp;

    tmp.x = point.r*cos(point.theta);
    tmp.y = point.r*sin(point.theta);
    tmp.z = point.z;

    return tmp;

}

cylindricalPoint toCylindrical(cartesianPoint point){

    cylindricalPoint tmp;

    tmp.r = sqrt(point.x*point.x + point.y*point.y);
    tmp.theta = (point.x == 0) ? 0 : atan(point.y/point.x);
    tmp.z = point.z;

    return tmp;
}

cartesianPoint sphericalToCartesian(sphericalPoint point){

    cartesianPoint tmp;

    tmp.x = point.p*cos(point.phi)*cos(point.theta);
    tmp.y = point.p*sin(point.phi)*sin(point.theta);
    tmp.z = point.p*cos(point.phi);

    return tmp;

}

sphericalPoint toSpherical(cartesianPoint point){

    sphericalPoint tmp;

    tmp.p = sqrt(point.x*point.x + point.y*point.y + point.z*point.z);
    tmp.phi = (tmp.p == 0) ? 0 : asin(point.z / tmp.p);
    tmp.theta = (point.x == 0) ? 0 : atan( point.y/point.x);

    return tmp;
}

void displayCartesian(cartesianPoint point);
void displayCylidrical(cylindricalPoint point);
void displaySpherical(sphericalPoint point);
