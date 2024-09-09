//********************************************************
// fracturing.c
// Author: Kimberly Pham
// Date: 9/7/24
// Class: COP 3223, Professor Parra
// Purpose: This program helps us practice fracturing
// functions in C.
// Input: 
//
// Output: A brief message
// //********************************************************



// header files for input/outputs, math functions, and defintions
#include <stdio.h>
#include <math.h>
#define PI 3.14159


// creates distance function
double calculateDistance() {
 
    double x1, y1, x2, y2;

    printf("Enter your first coordinate (x1, y1): \n");
    scanf("%lf %lf", &x1, &y1); 
    printf("Enter your second coordinate (x2, y2): \n");
    scanf("%lf %lf", &x2, &y2);

    double x = x2 - x1;
    double y = y2 - y1;
    double distance; 

    distance = sqrt((x * x) + (y * y));

    printf("Point #1 entered: x1 = %lf; y1 = %lf", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf", x2, y2);
    printf("The distance between the two points is %lf", distance);

    return distance;
}

double calculatePerimeter() {

    double perimeter = calculateDistance();

    printf("The perimeter of the city encompassed by your request is %lf", perimeter);

    return 4.5;
}

double calculateArea() {

    double x1, y1, x2, y2;

    printf("Enter your first coordinate (x1, y1): \n");
    scanf("%lf %lf", &x1, &y1); 
    printf("Enter your second coordinate (x2, y2): \n");
    scanf("%lf %lf", &x2, &y2);

    double length = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    double area; 

    area = length * height; 

    printf("Point #1 entered: x1 = %lf; y1 = %lf", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf", x2, y2);
    printf("The area of the city encompassed by your request is %lf", area);

    return 2.0;
}

double calculateWidth() {

    double x1, y1, x2, y2;

    printf("Enter your first coordinate (x1, y1): \n");
    scanf("%lf %lf", &x1, &y1); 
    printf("Enter your second coordinate (x2, y2): \n");
    scanf("%lf %lf", &x2, &y2);

    double width = fabs(y2 - y1);

    printf("Point #1 entered: x1 = %lf; y1 = %lf", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf", x2, y2);
    printf("The width of the city encompassed by your request is %lf", width);

    return 1.0;
}

double calculateHeight() {

    double x1, y1, x2, y2;

    printf("Enter your first coordinate (x1, y1): \n");
    scanf("%lf %lf", &x1, &y1); 
    printf("Enter your second coordinate (x2, y2): \n");
    scanf("%lf %lf", &x2, &y2);

    double height = fabs(x2 - x1);

    printf("Point #1 entered: x1 = %lf; y1 = %lf", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf", x2, y2);
    printf("The height of the city encompassed by your request is %lf", height);

    return 1.0;
}

// creates the main function
int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    // ends the function
    return 0;
}
