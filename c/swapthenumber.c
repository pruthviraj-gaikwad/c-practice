#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");

    scanf("%d", &b);
    if (b > a)
    {
        a = b - a;
        b = b - a;
        a = a + b;
    }
    else
    {
        b = a - b;
        a = a - b;         
        b = a + b;
    }
    printf("the number are %d ,%d", a, b);
}
