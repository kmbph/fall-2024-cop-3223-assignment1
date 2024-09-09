//********************************************************
// fracturing.c
// Author: Kimberly Pham
// Date: 9/7/24
// Class: COP 3223, Professor Parra
// Purpose: This program is to practice fracturing
// functions in C.
// Input: coordinates of point 1 and point 2
//
// Output: distance, area, perimeter, height, width
// //********************************************************




// header files for input/outputs, math functions, and defintions
#include <stdio.h>
#include <math.h>
#define PI 3.14159

// creates distance function
double calculateDistance() {

    // defines four variables to used for the points
    double x1, y1, x2, y2;

    // asks user for their first point
    printf("Enter your first coordinate (x1, y1): \n");
    scanf("%lf %lf", &x1, &y1); 

    // asks user for their second point
    printf("Enter your second coordinate (x2, y2): \n");
    scanf("%lf %lf", &x2, &y2);

    // defines the variables x, y, and distance
    double x = x2 - x1;
    double y = y2 - y1;
    double distance; 

    // creates the distance formula
    distance = sqrt((x * x) + (y * y));

    // prints the statements including the points and distance
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The distance between the two points is %lf\n", distance);

    // ends the function
    return distance;
}

// creates the perimeter function
double calculatePerimeter() {

    // defines the variable
    double perimeter = calculateDistance();

    // prints the statement including the variable
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    // ends the function
    return 4.5;
}

// creates the area function
double calculateArea() {

    // defines the variables
    double x1, y1, x2, y2;

    // asks user for the two points
    printf("Enter your first coordinate (x1, y1): \n");
    scanf("%lf %lf", &x1, &y1); 
    printf("Enter your second coordinate (x2, y2): \n");
    scanf("%lf %lf", &x2, &y2);

    // defines the variables distance, radius, and area
    double distance = calculateDistance();
    double radius = distance / 2;
    double area; 

    // creates a formula for area
    area = 2 * PI * radius; 

    // prints the statements including the points and area
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The area of the city encompassed by your request is %lf\n", area);

    // ends the function
    return 2.0;
}

// creates the width function 
double calculateWidth() {

    // defines the variables
    double x1, y1, x2, y2;

    // asks user for the points
    printf("Enter your first coordinate (x1, y1): \n");
    scanf("%lf %lf", &x1, &y1); 
    printf("Enter your second coordinate (x2, y2): \n");
    scanf("%lf %lf", &x2, &y2);

    // defines the width variable
    double width = fabs(y2 - y1);

    // prints the statements including the points and width
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The width of the city encompassed by your request is %lf\n", width);

    return 1.0;
}

// creates the height function
double calculateHeight() {

    // defines the variables
    double x1, y1, x2, y2;

    // asks user for points
    printf("Enter your first coordinate (x1, y1): \n");
    scanf("%lf %lf", &x1, &y1); 
    printf("Enter your second coordinate (x2, y2): \n");
    scanf("%lf %lf", &x2, &y2);

    // defines the height variable
    double height = fabs(x2 - x1);

    // prints the statements including the points and height
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The height of the city encompassed by your request is %lf\n", height);

    return 1.0;
}

// creates the main function
int main(int argc, char **argv) {

    // calls onto the functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    // ends the function
    return 0;
}
