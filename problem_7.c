// Wind - chill factor is the felt air temperature is always lower than the air temperature, and is calculated as per the following formula.

#include<stdio.h>
#include<math.h>

int main(){

    float T , V, W;

    printf("Enter air temperature(F): ");
    scanf("%f", &T);

    printf("Enter wind speed (miles/hour): ");
    scanf("%f", &V);

    W = 35.74 + (0.6215 * T) + ((0.4275 * T - 35.75) * pow(V, 0.16));

    printf("Wind-chill factor = %.2f F", W);

    return 0;
}
