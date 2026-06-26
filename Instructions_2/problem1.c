// What will be the output of the following programs?

#include<stdio.h>
int main(){

    int i = 2, j = 3, k , l;
    float a, b;

    k = i/j * j;      // 0
    l = j / i * i;   //  2
    a = i / j * j;  //   0.000
    b = j / i * i; //    2.0

    printf("%d %d %f %f\n", k, l, a, b);
    return 0;
}
