#include "graphicMath.h"
#include <math.h>

//////////////////////////////////////////////////////
//                                                  //
//  Functions for converting and display points     //
//                                                  //
//////////////////////////////////////////////////////

cartesianPoint cylindricalToCartesian(cylindricalPoint point){

    cartesianPoint tmp;

    tmp.x = point.r*cos(point.theta*(M_PI/180));
    tmp.y = point.r * sin(point.theta*(M_PI/180));
    tmp.z = point.z;

    return tmp;

}

cylindricalPoint toCylindrical(cartesianPoint point){

    cylindricalPoint tmp;

    tmp.r = sqrt(point.x*point.x + point.y*point.y);
    tmp.theta = (point.x == 0) ? 0 : atan(point.y/point.x) * (180/M_PI);
    tmp.z = point.z;

    return tmp;
}

cartesianPoint sphericalToCartesian(sphericalPoint point){

    cartesianPoint tmp;

    tmp.x = point.rho * cos(point.phi*(M_PI/180)) * cos(point.theta*(M_PI/180));
    tmp.y = point.rho * sin(point.phi*(M_PI/180)) * sin(point.theta*(M_PI/180));
    tmp.z = point.rho * cos(point.phi*(M_PI/180));

    return tmp;

}

sphericalPoint toSpherical(cartesianPoint point){

    sphericalPoint tmp;

    tmp.rho = sqrt(point.x*point.x + point.y*point.y + point.z*point.z);
    tmp.theta = (point.x == 0) ? 0 : atan( point.y/point.x) * (180/M_PI);

    if(tmp.rho == 0)
        tmp.phi = 0;
    else
        tmp.phi = acos(fmod((point.z/tmp.rho)+1 , 2) - 1) * (180/M_PI);

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
    printf("Azimuth  Theta: %f%c\n", point.theta, DEGREE);
    printf("Height Z: %f\n", point.z);
}

void displaySpherical(sphericalPoint point){

    printf("\nPoint in spherical coordinate system: \n");
    printf("Radial distance Rho: %f\n", point.rho);
    printf("Azimuth Theta: %f%c\n", point.theta, DEGREE);
    printf("Inclination Phi: %f%c\n", point.phi, DEGREE);

}

//////////////////////////////
//                          //
// Operations on vectors    //
//                          //
//////////////////////////////

void displayVectorThree(vectorThreeDim v){

    printf("\nVector AB:\n");
    printf("\n(Remember, vector attributes are differences between points A and B!)\n");
    printf("\nX: %f",v.x);
    printf("\nY: %f",v.y);
    printf("\nZ: %f\n",v.z);
}
void displayVectorTwo(vectorTwoDim v){

    printf("\nVector AB:\n");
    printf("\n(Remember, vector attributes are differences between points A and B!)\n");
    printf("\nX: %f",v.x);
    printf("\nY: %f\n",v.y);
}

double vectorThreeLength(vectorThreeDim v){

    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

double vectorTwoLength(vectorTwoDim v){

    return sqrt(v.x*v.x + v.y*v.y);
}

vectorThreeDim normalizeVectorThree(vectorThreeDim v){

    vectorThreeDim tmp;
    for(int i = 0 ; i < 2; i++){
        tmp.vec[i] = v.vec[i] * vectorThreeLength(v);
    }

    return tmp;
}
vectorTwoDim normalizeVectorTwo(vectorTwoDim v){

    vectorTwoDim tmp;
    for(int i = 0 ; i < 1; i++){
        tmp.vec[i] = v.vec[i] * vectorTwoLength(v);
    }

    return tmp;
}
