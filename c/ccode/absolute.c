#include<stdio.h>
int main()
{
    int num;
    printf("enter the number positive or negative :");
    scanf("%d",&num);
    if(num<0)
    printf("absolute value of %d is |%d|",num,(-1)*num);
    else
    printf("absolute value of %d is |%d|",num,num);
}