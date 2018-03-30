#pragma once

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
    double phi;
    double theta;

} sphericalPoint;

cartesianPoint cylindricalToCartesian(cylindricalPoint point);
cylindricalPoint toCylindrical(cartesianPoint point);

cartesianPoint sphericalToCartesian(sphericalPoint point);
sphericalPoint toSpherical(cartesianPoint point);

void displayCartesian(cartesianPoint point);
void displayCylidrical(cylindricalPoint point);
void displaySpherical(sphericalPoint point);
