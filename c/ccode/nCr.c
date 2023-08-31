#include <stdio.h>
int factorial(int a)
{
    int fact = 1;
    for (int i = 2; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int ncr(int x, int y)
{
    int c = factorial(x) / (factorial(y) * factorial(x - y));
    return c;
}
int main()
{
    int n ,i;
    printf("enter no.:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int m=ncr(i,j);
            printf("%d",m);
        }
        printf("\n");
    }
}
