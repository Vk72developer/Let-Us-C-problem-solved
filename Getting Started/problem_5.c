// Write a program to convert this temperature into centigrade degrees.

#include<stdio.h>

int main(){

    float fah, centi; 

    printf("\n Enter the Temperature in (Fahrenheit) : ");
    scanf("%f", &fah);

    centi = (fah - 32) * 5 / 9;

    printf("centigrade: %f", centi);


    return 0;
}