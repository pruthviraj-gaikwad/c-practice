#include <stdio.h>
int main()
{
    int a;
    printf("enter the month (1-12):");
    scanf("%d", &a);
    if (a == 1)
        printf("month is january ");
    else if (a == 2)
        printf("month is february ");
    else if (a == 3)
        printf("month is march ");
    else if (a == 4)
        printf("month is april ");
    else if (a == 5)
        printf("month is may ");
    else if (a == 6)
        printf("month is june ");
    else if (a == 7)
        printf("month is july");
    else if (a == 8)
        printf("month is august ");
    else if (a == 9)
        printf("month is september ");
    else if (a == 10)
        printf("month is october ");
    else if (a == 11)
        printf("month is november ");
    else
        printf("month is december  ");
}