//Two numbers are input through the keyboard into two locations C and F. Write a program to interchange the contents of C and D.

#include <stdio.h>

int main()
{
    int C, D, temp;

    printf("Enter value of C: ");
    scanf("%d", &C);

    printf("Enter value of D: ");
    scanf("%d", &D);

    // Interchange values using temporary variable
    temp = C;
    C = D;
    D = temp;

    printf("After interchange:\n");
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}