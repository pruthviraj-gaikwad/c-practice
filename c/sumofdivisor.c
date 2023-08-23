#include<stdio.h>
int fun(int x)
{
    // int sum = 1, i;
    // for (i=2;i*i<=x;i++)
    // {
    //     if(x%i==0)
    //     {
    //         sum+=i+x/i;
    //     }
    // }
    // return sum+x;
     int sum = 1, i;
    for (i=2;i<x;i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }
     for (i=2;i<x;i++)
    {
        if(i*i==x)
        {
            sum+=i;
        }
    }
    return sum+x;
    // if(i*i==x)
    // {
    //     return sum+x;
    // }
}
int main()
{
    int a;
    printf("enter a num:");
    scanf("%d", &a);
    int y = fun(a);
    printf("%d", y);
}