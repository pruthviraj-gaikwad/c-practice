#include <stdio.h>
int main()
{
    int a = 4;
    int b = 5;
    printf("a | b=%d\n", a | b);//takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
    printf("a & b=%d\n", a & b);//takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.  
}