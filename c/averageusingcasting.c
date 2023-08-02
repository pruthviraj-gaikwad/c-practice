#include<stdio.h>
int main()
{
    int grade1,grade2,grade3;
    double average;
    printf("enter the three grade");
    scanf("%d%d%d",&grade1,&grade2,&grade3);
    average=((double)grade1+(double)grade2+(double)grade3)/3;
    printf("average : %.4lf",average);
}