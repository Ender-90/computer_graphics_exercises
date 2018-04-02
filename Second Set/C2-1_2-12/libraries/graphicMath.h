#pragma once


#define DEGREE 248 // definition of degree symbol

// Definitions of point in various coordinate systems.

typedef struct {

    double x;
    double y;
    double z;

} cartesianPoint;

typedef struct {

    double r;
    double theta;
    double z;

} cylindricalPoint;

typedef struct {

    double rho;
    double theta;
    double phi;


} sphericalPoint;

// Functions for converting and display points

cartesianPoint cylindricalToCartesian(cylindricalPoint point);
cylindricalPoint toCylindrical(cartesianPoint point);

cartesianPoint sphericalToCartesian(sphericalPoint point);
sphericalPoint toSpherical(cartesianPoint point);

void displayCartesian(cartesianPoint point);
void displayCylidrical(cylindricalPoint point);
void displaySpherical(sphericalPoint point);

// Vector definitions

typedef struct{
    double x, y, z;
} vectorThreeDim;

typedef struct{
    double x, y;
} vectorTwoDim;

// Operations on vectors

void displayVectorThree(vectorThreeDim v);
double vectorThreeLength(vectorThreeDim v);
vectorThreeDim normalizeVectorThree(vectorThreeDim v);
vectorThreeDim addVectorsThree(vectorThreeDim v1, vectorThreeDim v2);
double scalarMultVectorsThree(vectorThreeDim v1, vectorThreeDim v2);
vectorThreeDim vectorMultVectorsThree(vectorThreeDim v1, vectorThreeDim v2);

void displayVectorTwo(vectorTwoDim v);
double vectorTwoLength(vectorTwoDim);
vectorTwoDim normalizeVectorTwo(vectorTwoDim v);
vectorTwoDim addVectorsTwo(vectorTwoDim v1, vectorTwoDim v2);
double calculateAngleBetweenVectorsTwo(vectorTwoDim v1, vectorTwoDim v2);

// Definitions of matrices

typedef struct{
    double val[2][3];
} matrix2x3;

typedef struct{
    double val[3][2];
} matrix3x2;

typedef struct{
    double val[2][2];
} matrix2x2;

typedef struct{
    double val[3][3];
} matrix3x3;

typedef struct{
    double val[4][4];
}matrix4x4;

// Operations on matrices

void displayM22(matrix2x2 m);
void displayM23(matrix2x3 m);
void displayM32(matrix3x2 m);
void displayM33(matrix3x3 m);
void displayM44(matrix4x4 m);

matrix3x3 multMatrices23x32(matrix2x3 m23, matrix3x2 m32);
matrix2x2 multMatrices32x23(matrix3x2 m32, matrix2x3 m23);

