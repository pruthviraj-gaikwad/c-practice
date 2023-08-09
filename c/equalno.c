#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("enter the number :");
    scanf("%d", &temp);
    n = temp;
    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("%d is paladomial", temp);
    }
    else
    {
        printf("%d is not paladomial", temp);
    }
}