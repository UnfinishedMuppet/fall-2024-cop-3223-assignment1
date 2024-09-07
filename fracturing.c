#include <stdio.h>
#include <math.h>

// Asks for 4 variables and uses the distance formula to calculate the distance. 
double calculateDistance()
{
    // Asks for and stores x values
    printf("Enter x1 and x2:\n");
    double x1 = 1, x2 = 1;
    scanf("%lf %lf", &x1, &x2);

    // Asks for and stores y values
    printf("Enter y1 and y2:");
    double y1 = 1, y2 = 2;
    scanf("%lf %lf", &y1, &y2);
    
    //Calculates distance
    double power = 2;
    double xDist = x1 - x2;
    double yDist = y1 - y2;
    double pow(double xDist, double power );
    double pow(double yDist, double power);
    double Dist = xDist + yDist;
    double sqrt(double Dist);
    return 0;



}