// calculate the sum of its digit. 

#include<stdio.h>

int main(){

      int num, rem,sum = 0;

      printf("\n Enter the number: ");
      scanf("%d", &num);

      while(num > 0){

        rem = num % 10;
        sum = sum + rem;
        num /= 10;

      }

      printf("Sum of digit:%d", sum);


    return 0;
}