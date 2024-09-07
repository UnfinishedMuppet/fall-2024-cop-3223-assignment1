#include <stdio.h>
#include <math.h>
#define PI 3.14159
// For my SANITY I am putting the terminal output here:           gcc fracturing.c && -lm ./a.out

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
    printf("%lf\n", distance);
    return distance;

}


/*double calculatePerimeter()
{
    // Asks for and stores (x1,y1)
    printf("Enter x1 and y1:\n");
    double x1 = 1, y1 = 1;
    scanf("%lf %lf", &x1, &y1);

    // Asks for and stores (x2,y2)
    printf("Enter x2 and y2:\n");
    double x2 = 1, y2 = 2;
    scanf("%lf %lf", &x2, &y2);

    // Calculates Perimeter (x-h)^2 + (y-k)^2
    double radius = sqrt(pow(x1 - x2, 2) + pow(y1-y2,2));
    double perimeter = 2 * PI * radius;
    printf("%lf", perimeter);
    return perimeter;

}

*/

double calculateArea()
{
    double diameter = calculateDistance();
    double radius = diameter/2;
    double area = pow(radius, 2) * PI;
    printf("%lf", area);
    return 2;









}



// Can confirm as of 1am 9/7 that Distance is working, Perimeter is not yet.
// 1:15, Perimeter is WORKING

int main()
{
    calculateDistance();
    //calculatePerimeter();
    return 0;

}