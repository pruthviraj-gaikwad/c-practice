#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the fist number:");
    scanf("%d", &a);
    printf("enter the secound numober :");
    scanf("%d", &b);
    printf("enter the 3rd numober :");
    scanf("%d", &c);
    int Max = a;
    int Min = b;
    if (a < b)
    {
        Max = b;
        Min = a;
    }
    if (Max < c)
    {
        Max = c;
    }
    if(Min>c)
    {
        Min=c;
    }
    printf("max number between three number %d\n",Max);
    printf("min number between three number %d",Min);
}