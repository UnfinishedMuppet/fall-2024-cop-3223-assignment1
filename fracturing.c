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
    printf("Enter y1 and y2:\n");
    double y1 = 1, y2 = 2;
    scanf("%lf %lf", &y1, &y2);
    
    //Calculates distance
    double distance = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
    printf("%lf\n", distance);
    return distance;

}


double calculatePerimeter()
{
    printf("Enter x1 and y1:\n");
    double x1 = 1, y1 = 1;
    scanf("%lf %lf", &x1, &x2);

    // Asks for and stores y values
    printf("Enter x2 and y2:\n");
    double x2 = 1, y2 = 2;
    scanf("%lf %lf", &y1, &y2);





}






int main()
{
    calculateDistance();
    return 0;

}