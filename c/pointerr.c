#include<stdio.h>
int main()
{
    int a=22;
    int *x=&a;
    int **y=&x;
    printf("%d\n",*x);
    printf("%d\n",**y);    
}