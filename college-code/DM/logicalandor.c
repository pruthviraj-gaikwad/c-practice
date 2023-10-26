#include <stdio.h>
int main()
{
    if (4 != 5 && 4 < 5)//&& is and operator.
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    if (4 != 5 || 4 > 5)//||is or operator.
    {
        printf("true\n");
    }
}