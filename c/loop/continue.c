#include<stdio.h>
int main()
{
    int a=0;
    while(a!=50)
    {
        printf("%d\n",a);
        if(a==15)
        continue;
        a++;
    }
}