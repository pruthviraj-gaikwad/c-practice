#include<stdio.h>
int main()
{
    int a,b,s,c;
    printf("enter your salary per hour in $ :");
    scanf("%d",&a);
    printf("total day work on last month:");
    scanf("%d",&c);
    b=c*24;
    s=a*b;
    printf("your salary is :%d$",s);
}