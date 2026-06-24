// Ramesh's basic salary is input through the keyword. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.

#include<stdio.h>
int main(){

    float grpay, hra, da, bp;

    printf("\n Enter basic salary of ramesh: ");
    scanf("%f", &bp);

    hra = 0.2 * bp;
    da = 0.4 * bp;
    grpay = bp + da + hra;

    printf("Basic Salary: %f\n", bp);
    printf("House rent allowance: %f\n", hra);
    printf("Dearness allowance: %f\n", da);
    printf("Gross Pay :%f\n", grpay);


    return 0;
}
