#include<stdio.h>
int power(int v, int c)
{
    if (c == 0)
    {
        return 1;
    }
    int a = v*power(v,c-1);
    return a;
}
int main()
{
    int b,p;
    printf("enter the base :");
    scanf("%d",&b);
    printf("enter the power :");
    scanf("%d",&p);
    int m=power(b,p);
    printf("%d",m);
}