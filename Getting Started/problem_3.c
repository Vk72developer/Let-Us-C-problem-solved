// The distance between two cities (in kilometers) is input through the keyword. Write a program to convert and print this distance in meters, feet, inches and centimeters.

#include<stdio.h>

int main(){

    float km, inch, cm, m, ft;

    printf("\n Enter the distance in kilometers. ");
    scanf("%f", &km);

    m = km * 1000;
    cm = km * 100000;
    inch = cm / 2.54;
    ft = inch / 12;

    printf("Distance in meters =%f\n", m);
    printf("Distance in kilometers =%f\n", km);
    printf("Distance in centimeters =%f\n", cm);
    printf("Distance in inch =%f\n", inch);
    printf("Distance in feet =%f\n", ft);

    return 0;
}