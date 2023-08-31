#include <stdio.h>
int main()
{
    float a1, an,d, a;
    float sn, n;
    printf("total number in the arithmetic sequence :");
    scanf("%f", &n);
    printf("fist number is :");
    scanf("%f", &a1);
    printf("difference between two number :");
    scanf("%f", &d);
    an = a1 + (n - 1) * d;
    a = (a1 + an);
    sn = a * (n / 2);
    printf("sum is :%.1fand the term :%.1f ", sn,an);
}