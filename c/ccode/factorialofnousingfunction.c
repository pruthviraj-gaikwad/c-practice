#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d", &a);
    int b = factorial(a);
    printf("%d", b);
}
