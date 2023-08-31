#include<stdio.h>
int odd(int y)
{
    if(inEven(y)==1)
    return 0;
    else
    return 1;
}
int inEven(int x)
{
    if(x%2==0)
    return 1;
    else 
    return 0;
}
int main()
{
    int a;
    printf("enter a num:");
    scanf("%d",&a);
    int u=inEven(a);
    printf("num :%d",u);
}