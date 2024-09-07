#include <stdio.h>
#include <math.h>
#define PI 3.14159
// For my SANITY I am putting the terminal output here:           gcc fracturing.c && -lm ./a.out
// Distance = DIAMETER

// Asks for 4 variables and uses the distance formula to calculate the distance. 
double calculateDistance()
{
    // Asks for and stores x values
    printf("Enter x1 and x2:\n");
    double x1 = 1, x2 = 1;
    scanf("%lf %lf", &x1, &x2);

    // Asks for and stores y values
    printf("Enter y1 and y2:\n");
    double y1 = 1, y2 = 2;
    scanf("%lf %lf", &y1, &y2);
    
    //Calculates distance
    double distance = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
    printf("Point #1 Entered: x1 =%lf", x1);
    printf("; y1 =%lf\n", y1);
    printf("Point #2 Entered: x2 =%lf", x2);
    printf("; y2 =%lf\n", y2);
    printf("The distance between two points is %lf\n", distance);
    return distance;

}

// Uses calculateDistance() to determine perimeter
double calculatePerimeter()
{
    double radius = calculateDistance();
    double perimeter = 2 * PI * radius;
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
    return perimeter;

}

double calculateArea()
{
    double diameter = calculateDistance();
    double radius = diameter/2;
    double area = pow(radius, 2) * PI;
    printf("The area of the city encompassed by your request is %lf\n", area);
    return 2;

}


double calculateWidth()
{
    // Asks for and stores x values
    printf("Enter x1 and x2:\n");
    double x1 = 1, x2 = 1;
    scanf("%lf %lf", &x1, &x2);

    // Asks for and stores y values
    printf("Enter y1 and y2:\n");
    double y1 = 1, y2 = 2;
    scanf("%lf %lf", &y1, &y2);
    
    //Calculates Width
    double width = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
    printf("Point #1 Entered: x1 =%lf", x1);
    printf("; y1 =%lf\n", y1);
    printf("Point #2 Entered: x2 =%lf", x2);
    printf("; y2 =%lf\n", y2);
    printf("The width of the city encompassed by your request is -whatever is computed %lf\n", width);
    return 3;





}




// Can confirm as of 1am 9/7 that Distance is WORKING
// 1:15, Perimeter is WORKING
// 2:09pm Area is WORKING



int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    return 0;

}