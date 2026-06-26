//Write a program to receive values of Latitude ( L1, L2 ) and longitude ( G1, G2 ) in degrees, of two places on the earth and output the distance (D) between them in nautical miles. The formula for distance in nautical miles.

#include <stdio.h>
#include <math.h>

int main()
{
    float L1, L2, G1, G2, D;
    float rad = 3.14159 / 180;

    printf("Enter latitude L1 and L2: ");
    scanf("%f %f", &L1, &L2);

    printf("Enter longitude G1 and G2: ");
    scanf("%f %f", &G1, &G2);

    // Convert degrees into radians
    L1 = L1 * rad;
    L2 = L2 * rad;
    G1 = G1 * rad;
    G2 = G2 * rad;

    D = 60 * acos(sin(L1) * sin(L2) +
                  cos(L1) * cos(L2) * cos(G2 - G1));

    printf("Distance between two places = %.2f nautical miles", D);

    return 0;
}