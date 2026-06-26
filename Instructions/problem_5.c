// Write a program to receive Cartesian co-ordinates (x , y) of a point and convert them into polar co-ordinates (r, z). 

#include<stdio.h>
#include<math.h>

int main(){


    float x , y, r, z;

    printf("Enter cartesian coordinates x and y: ");
    scanf("%f %f", &x, &y);

    r = sqrt(x * x + y * y);
    z = atan(y / x);

    printf("polar coordinates: \n");
    printf("r = %.2f\n", r);
    printf("z = %.2f radians", z);


    return 0;
}