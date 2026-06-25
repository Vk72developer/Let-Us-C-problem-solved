// If the marks obtained by a student in five different subjects are input through the keyword, write a program to find out the aggregate marks and percentage marks through obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject a 100. 

// calculate the aggregate & percentage marks  
#include<stdio.h>

int main(){

     int math, phy, chem, bio, comp, aggr;
     float result;

    printf("\n Enter the marks in 5 sunjects: ");
    scanf("%d %d %d %d %d", &math, &phy, &chem, &bio, &comp);

    aggr = math + phy + chem + bio + comp;
    result = aggr / 5;

    printf("Aggregation marks: %d\n", aggr);
    printf("Percentage Marks: %f\n", result);

    return 0;
}