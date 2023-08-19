#include <stdio.h>
int sum(int x)
{
    if (x == 0 || x == 1)
    {
        return x;
    }
    int m = x + sum(x - 1);
    return m;
}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d", &a);
    int fun = sum(a);
    printf("%d", fun);
}