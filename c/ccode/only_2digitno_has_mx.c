#include <stdio.h>
void fun(int a)
{
    if (a >= 10 && a <= 99)
    {
        printf("your no is two digit no\n");
    }
    else
    {
        printf("no is not two digit.. please try again\n");
    }
    int b = a / 10;
    int c = a % 10;
    if (b > c)
        printf("max between two digit %d", b);
    else
        printf("max between two digit %d", c);
}
int main()
{
    int a;
    int count = 0;
    printf("enter two digit number:");
    scanf("%d", &a);
    fun(a);
}