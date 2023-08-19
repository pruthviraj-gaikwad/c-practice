#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the number are %d ,%d", a, b);
}
