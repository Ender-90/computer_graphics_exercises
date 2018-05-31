#include "graphicMath.h"
#include <math.h>
#include <stdio.h>

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


// 3-D vectors

void displayVectorThree(vectorThreeDim v){

    printf("\nVector AB:\n");
    printf("\n(Remember, vector attributes are differences between points A and B!)\n");
    printf("\nX: %f",v.x);
    printf("\nY: %f",v.y);
    printf("\nZ: %f\n",v.z);
}
double vectorThreeLength(vectorThreeDim v){

    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}
vectorThreeDim normalizeVectorThree(vectorThreeDim v){

    printf("\nNormalizing three-dim vector...");

    vectorThreeDim tmp;
    tmp.x = v.x / vectorThreeLength(v);
    tmp.y = v.y / vectorThreeLength(v);
    tmp.z = v.z / vectorThreeLength(v);

    printf(" Done.\n");
    return tmp;
}
vectorThreeDim addVectorsThree(vectorThreeDim v1, vectorThreeDim v2){
     printf("\nAdding two three-dim vector...");

    vectorThreeDim tmp;
    tmp.x = v1.x + v2.x;
    tmp.y = v1.y + v2.y;
    tmp.z = v1.z + v2.z;

    printf(" Done.\n");
    return tmp;
}
double scalarMultVectorsThree(vectorThreeDim v1, vectorThreeDim v2){
    return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
}
vectorThreeDim vectorMultVectorsThree(vectorThreeDim v1, vectorThreeDim v2){
    printf("\nAxB for two three-dim vector...");

    vectorThreeDim tmp;
    tmp.x = v1.y*v2.z - v1.z*v2.y;
    tmp.y = v1.x*v2.z - v1.z*v2.x;
    tmp.z = v1.x*v2.y - v1.y*v2.x;

    printf(" Done.\n");
    return tmp;
}

// 2-D vectors

void displayVectorTwo(vectorTwoDim v){

    printf("\nVector AB:\n");
    printf("\n(Remember, vector attributes are differences between points A and B!)\n");
    printf("\nX: %f",v.x);
    printf("\nY: %f\n",v.y);
}
double vectorTwoLength(vectorTwoDim v){

    return sqrt(v.x*v.x + v.y*v.y);
}
vectorTwoDim normalizeVectorTwo(vectorTwoDim v){

    printf("\nNormalizing two-dim vector...");

    vectorTwoDim tmp;
    tmp.x = v.x / vectorTwoLength(v);
    tmp.y = v.y / vectorTwoLength(v);

    printf(" Done.\n");
    return tmp;
}
vectorTwoDim addVectorsTwo(vectorTwoDim v1, vectorTwoDim v2){
     printf("\nAdding two two-dim vector...");

    vectorTwoDim tmp;
    tmp.x = v1.x + v2.x;
    tmp.y = v1.y + v2.y;

    printf(" Done.\n");
    return tmp;
}
double calculateAngleBetweenVectorsTwo(vectorTwoDim v1, vectorTwoDim v2){

    double angleV1, angleV2;

    printf("\nCalculating angle of first vector...");

    if(v1.x == 0){
        angleV1 = (v1.y == 0 ? 0 : (v1.y > 0 ? M_PI / 2 : (3*M_PI) / 2));
    } else {
        angleV1 = atan2(v1.y, v1.x);
    }
    printf(" Done.\n");

    printf("\nCalculating angle of second vector...");

    if(v2.x == 0){
        angleV2 = (v2.y == 0 ? 0 : (v2.y > 0 ? M_PI / 2 : (3*M_PI) / 2));
    } else {
        angleV2 = atan2(v2.y, v2.x);
    }
    printf(" Done.\n");

    printf("\n\nAngle between vectors is equal to: %f%c\n\n", (angleV1 - angleV2) * (180/M_PI), DEGREE);
    return (angleV1 - angleV2) * (180/M_PI);

}

//////////////////////////////
//                          //
// Operations on matrices   //
//                          //
//////////////////////////////

// Display matrices

void displayM22(matrix2x2 m){
    printf("\n\nMatrix 2x2:\n");
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%f ",m.val[i][j]);
        }
        printf("\n");
    }
}

void displayM23(matrix2x3 m){
    printf("\n\nMatrix 2x3:\n");
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%f ",m.val[i][j]);
        }
        printf("\n");
    }
}

void displayM32(matrix3x2 m){
    printf("\n\nMatrix 3x2:\n");
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%f ",m.val[i][j]);
        }
        printf("\n");
    }
}
void displayM33(matrix3x3 m){
    printf("\n\nMatrix 3x3:\n");
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%f ",m.val[i][j]);
        }
        printf("\n");
    }
}
void displayM44(matrix4x4 m){
    printf("\n\nMatrix 4x4:\n");
    int i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%f ",m.val[i][j]);
        }
        printf("\n");
    }
}

// Other operations

matrix3x3 multMatrices23x32(matrix2x3 m23, matrix3x2 m32){

    printf("\n\nMultiplication of two matrices...");

    matrix3x3 result = {0};

    int i, j, k;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 2; k++){
                result.val[j][i] += m23.val[k][i]*m32.val[j][k];
            }
        }
    }

        return result;
}

matrix2x2 multMatrices32x23(matrix3x2 m32, matrix2x3 m23){

    printf("\n\nMultiplication of two matrices...");

    matrix2x2 result = {0};

    int i, j, k;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            for(k = 0; k < 3; k++){
                result.val[i][j] += m32.val[k][j]*m23.val[i][k];
            }
        }
    }

        return result;
}
