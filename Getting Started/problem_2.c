// Calculate the Simple Interest

#include<stdio.h>
int main()

{

    int p, t;
    float si,r;

    
    printf("\nEnter an Principle: ");
    scanf("%d", &p);
    printf("Enter an time: \n");
    scanf("%d", &t);
    printf("Enter an rate: \n");
    scanf("%f", &r);
    
    si = (p * r * t ) / 100;

    printf("Simple interest: %f\n", si);

  return  0;
}
