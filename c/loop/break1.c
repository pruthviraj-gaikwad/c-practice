#include <stdio.h>
int main()
{
    int f;
    printf("enter the no:");
    scanf("%d", &f);
    for (int i = 1; i <= f; i++)
    {
        printf("%d\n",i);
        if(i==5)
        break;
    }
}