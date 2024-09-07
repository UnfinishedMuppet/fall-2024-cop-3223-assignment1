// Emma Lundquist, em649650

#include <stdio.h>
#include <math.h>
#define PI 3.14159

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
    printf("Point #1 Entered: x1 =%.3lf", x1);
    printf("; y1 =%.3lf\n", y1);
    printf("Point #2 Entered: x2 =%.3lf", x2);
    printf("; y2 =%.3lf\n", y2);
    printf("The distance between two points is %.3lf\n", distance);
    return distance;

}

// Uses calculateDistance() to determine perimeter
double calculatePerimeter()
{
    double radius = calculateDistance();
    double perimeter = 2 * PI * radius;
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);
    return perimeter;

}

// Uses calculateDistance() to determine area
double calculateArea()
{
    double diameter = calculateDistance();
    double radius = diameter/2;
    double area = pow(radius, 2) * PI;
    printf("The area of the city encompassed by your request is %.3lf\n", area);
    return 2;

}

//Asks for 4 variables and uses the distance formula to calculate the width.
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
    printf("Point #1 Entered: x1 =%.3lf", x1);
    printf("; y1 =%.3lf\n", y1);
    printf("Point #2 Entered: x2 =%.3lf", x2);
    printf("; y2 =%.3lf\n", y2);
    printf("The width of the city encompassed by your request is %.3lf\n", width);
    return 3;

}

//Asks for 4 variables and uses the distance formula to calculate the height.
double calculateHeight()
{
    // Asks for and stores x values
    printf("Enter x1 and x2:\n");
    double x1 = 1, x2 = 1;
    scanf("%lf %lf", &x1, &x2);

    // Asks for and stores y values
    printf("Enter y1 and y2:\n");
    double y1 = 1, y2 = 2;
    scanf("%lf %lf", &y1, &y2);
    
    //Calculates Height
    double height = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
    printf("Point #1 Entered: x1 =%.3lf", x1);
    printf("; y1 =%.3lf\n", y1);
    printf("Point #2 Entered: x2 =%.3lf", x2);
    printf("; y2 =%.3lf\n", y2);
    printf("The height of the city encompassed by your request is %.3lf\n", height);
    return 1;

}




int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;

}