#include <stdio.h>
int main()
{
    int a, b;
    printf("enter point on x axis:");
    scanf("%d", &a);
    printf("enter point on y axis :");
    scanf("%d", &b);
    if (a > 0 && b > 0)
        printf("the point in the first quadrant");
    else if (a < 0 && b > 0)
        printf("the point in th second quadrant ");
    else if (a < 0 && b < 0)
        printf("the point in the thred quadrant");
    else
        printf("the point in the fourth quadrant");
}