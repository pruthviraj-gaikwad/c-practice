#include <stdio.h>
void sum(int x,int y)
{
    if (x == 0)
    {
        printf("%d", y);
        return;
    }
    sum(x-1,y+x);
    return;
}
int main()
{
    int a;
    printf("enter the no:");
    scanf("%d", &a);
    sum(a,0);
}