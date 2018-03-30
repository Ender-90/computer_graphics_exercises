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

    tmp.x = point.rho*cos(point.phi)*cos(point.theta);
    tmp.y = point.rho*sin(point.phi)*sin(point.theta);
    tmp.z = point.rho*cos(point.phi);

    return tmp;

}

sphericalPoint toSpherical(cartesianPoint point){

    sphericalPoint tmp;

    tmp.rho = sqrt(point.x*point.x + point.y*point.y + point.z*point.z);
    tmp.theta = (point.x == 0) ? 0 : atan( point.y/point.x);

    if(point.z == 0)
        tmp.phi = M_PI / 2;
    else
        tmp.phi = atan(sqrt(point.x*point.x + point.y*point.y)/point.z);

    return tmp;
}

void displayCartesian(cartesianPoint point){

    printf("\nPoint in Cartesian coordinate system: \n");
    printf("Coordinate X: %f\n", point.x);
    printf("Coordinate Y: %f\n", point.y);
    printf("Coordinate Z: %f\n", point.z);
}

void displayCylidrical(cylindricalPoint point){

    printf("\nPoint in cylidrical coordinate system: \n");
    printf("Radial distance R: %f\n", point.r);
    printf("Azimuth  Theta: %f\n", point.theta);
    printf("Height Z: %f\n", point.z);
}

void displaySpherical(sphericalPoint point){

    printf("\nPoint in spherical coordinate system: \n");
    printf("Radial distance Rho: %f\n", point.rho);
    printf("Inclination Phi: %f\n", point.phi);
    printf("Azimuth Theta: %f\n", point.theta);
}
