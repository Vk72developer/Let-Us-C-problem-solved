// Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.

#include<stdio.h>
int main(){

    int C,D,temp;

    printf("Enter value of C: ");
    scanf("%d", &C);

    printf("Enter value of D: ");
    scanf("%d", &D);
   
     // interchange value using temporary variables 

     temp = C;
     C = D;
     D = temp;

     printf("After interchanging: \n");
     printf("C =%d \n", C);
     printf("D = %d\n", D);


    return 0;
}