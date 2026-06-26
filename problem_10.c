// If lengths of three sides of atrianglre are input through the keyboard, write a prpgram to find the area of the triangle.

#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c,sp, area;

    printf("\n Enter sides of atriangle: ");
    scanf("%f %f %f", &a, &b, &c);

    sp = ( a + b + c)/2;

    area = sqrt(sp *(sp - a) * (sp - b) * (sp - c));

    printf("Area of triangle = %f\n", area);

    return 0;
}