// Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle. 

#include<stdio.h>

int main(){

    int len, bre, rad;
    float ar, cir, peri, area;

    printf("\n Enter the length and breadth of the rectangle: ");
    scanf("%d %d %d", &len, &bre, &rad);
    printf("\n Enter the radius of the circle: ");

    peri = 2 * ( len + bre );
    ar = len * bre;
    cir  = 2 * 3.14 * rad;
    area = 3.14 * rad * rad;

    printf("Perimeter of the rectangle: %f\n", peri);
    printf("Area of the rectangle: %f\n", ar);
    printf("circumference of the circle: %f\n", cir);
    printf("Area of the circle: %f\n", area);


    return 0;
}