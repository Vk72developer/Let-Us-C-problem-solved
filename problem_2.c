// What will be the output of the following programs? 

#include<stdio.h>

int main(){

    int a,b,c,d;

    a = 2 % 5;   // 2
    b = -2 % 5;  // -2
    c = 2 % -5;  // 2
    d = -2 % -5; // -2

    printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
    return 0;
}