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

typedef union {
    double vec[3];
    struct {
        double x, y, z;
    };
} vectorThreeDim;

typedef union {
    double vec[2];
    struct {
        double x, y;
    };
} vectorTwoDim;

// Vector operations

double vectorThreeLength(vectorThreeDim v);
double vectorTwoLength(vectorTwoDim);
