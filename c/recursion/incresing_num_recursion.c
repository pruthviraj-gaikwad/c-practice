#include <stdio.h>
void incresing(int y)
{
    if (y == 0)
    {
        return;
    }
    incresing(y - 1);
    printf("%d\n", y);
    return;
}
void recursion(int x)
{
    if (x == 0)
    {
        return;
    }
    printf("%d\n", x);
    recursion(x - 1);
    return;
}
int main()
{
    int a;
    printf("ente the number:");
    scanf("%d", &a);
    recursion(a);
    incresing(a);
    
}