#include <stdio.h>
int main()
{
    int a, b, min, max;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second number :");
    scanf("%d", &b);
    min = (a > b) ? b : a;
    max = (a > b) ? a : b;
    printf("minimum value between two no. %d\n", min);
    printf("maximum value between two no. %d", max);
}