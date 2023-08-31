#include <stdio.h>
int main()
{
    int num1 = 5, num2 = 7;
    int *ptrA, *ptrB;
    printf(" %d  %d\n", num1, num2);
    ptrA = &num1;
    ptrB = &num2;
    printf(" %d  %d\n", num1, num2);
    *ptrA = *ptrA + 1;
    *ptrB = *ptrB + 3;
    printf(" %d  %d\n", num1, num2);
    ptrA = ptrB;
    ptrB = ptrA;
    printf(" %d  %d\n", num1, num2);
    printf("%d   %d\n", *ptrA, *ptrB);
    num1 = *ptrB;
    num2 = num1 - 3;
    printf(" %d  %d\n", num1, num2);
}