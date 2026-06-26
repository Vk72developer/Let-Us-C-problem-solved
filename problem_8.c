// write a program to print all its trigonometric ratios. 

#include <stdio.h>
#include <math.h>

int main()
{
    float angle, rad;

    printf("Enter angle in degrees: ");
    scanf("%f", &angle);

    // Convert degree into radians
    rad = angle * (3.14159 / 180);

    printf("sin(%.2f) = %.2f\n", angle, sin(rad));
    printf("cos(%.2f) = %.2f\n", angle, cos(rad));
    printf("tan(%.2f) = %.2f\n", angle, tan(rad));

    printf("cot(%.2f) = %.2f\n", angle, 1 / tan(rad));
    printf("sec(%.2f) = %.2f\n", angle, 1 / cos(rad));
    printf("cosec(%.2f) = %.2f\n", angle, 1 / sin(rad));

    return 0;
}