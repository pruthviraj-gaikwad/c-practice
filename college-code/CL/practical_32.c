#include <stdio.h>
void square(int a)
{
    int b;
    int c = 1;
    do
    {
        for (int i = 2; i <= a / 2; i++)
        {
            if (i * i == a)
            {
                printf("given number %d perfect square root is %d \n", a, i);
                b = i;
            }
        }
        if (a == 1)
        {
            printf("given number %d has perfect square root %d\n", a, a);
        }
        else if (b * b != a)
        {
            printf("given number %d not square root\n", a);
        }
        if (c == 1)
        {
            printf("if you want to continue (enter 1):");
            scanf("%d", &c);
        }
    } while (c != 0);
}
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d", &a);
    square(a);
}