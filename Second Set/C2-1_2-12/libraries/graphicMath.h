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
