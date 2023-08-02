#include <stdio.h>
int main()
{
    int a1, an, n, d;
    printf("enter the total number in the arethmetic sequence :");
    scanf("%d", &n);
    printf("enter the first number :");
    scanf("%d", &a1);
    printf("enter the deffernce between two number : ");
    scanf("%d", &d);
    an = a1 + (n - 1) * d;
    printf("the number is : %d", an);
}