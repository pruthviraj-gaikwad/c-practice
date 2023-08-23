#include<stdio.h>
int fun(int y)
{   int h=1;
    for(int i=1;i<=y;i++)
    {
        h=i*h;
    }
    return h;
}
int main()
{
    int a;
    printf("enter num:");
    scanf("%d",&a);
    int x=fun(a);
    printf("factorial of %d :%d",a,x);
}