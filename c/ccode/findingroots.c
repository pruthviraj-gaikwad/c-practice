#include <stdio.h>
void fun()
{
    float sum = 0;
    int i;
    int n = 100;
    for (i = 0; i < n; i++)
    {
        sum = ((i * i * i) - (5 * i) - 3);
        if (sum > 0)
        {
            break;
        }
    }
    float a = i - 1;
    float b = i;
    float c;
    while (a - b == 0.0001)
    {
        c = (a + b) / a;
        float m = ((c * c * c) - (5 * c) - 3);
        if (m > 0)
        {
            b = c;
        }
        if (m < 0)
        {
            a = c;
        }
    }
    printf("%f is root", c);
}
int main()
{
    fun();
}