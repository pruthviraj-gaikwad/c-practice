#include <stdio.h>
int fun(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * fun(x - 1);
    }
}
int main()
{
    int no;
    printf("enter the no.:");
    scanf("%d", &no);
    int y=fun(no);
    printf("%d",y);
}
