#include <stdio.h>
int main()
{
    if (4 < 5)
    {
        printf("%d\n", 4 << 1);// takes two numbers, the left shifts the bits of the first operand, and the second operand decides the number of places to shift. 
    }
    if (4 != 5)
    {
        printf("%d\n", 4 >> 1);//takes two numbers, right shifts the bits of the first operand, and the second operand decides the number of places to shift. 
    }
    printf("%d\n",~4);//takes one number and inverts all bits of it.
}