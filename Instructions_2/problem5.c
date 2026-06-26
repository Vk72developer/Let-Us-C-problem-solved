//Write code sum of digit in c language 

#include <stdio.h>

int main()
{
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;   // get last digit
        sum = sum + digit;  // add digit
        num = num / 10;     // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}