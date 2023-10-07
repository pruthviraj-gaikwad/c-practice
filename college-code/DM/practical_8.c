#include <stdio.h>
#include <string.h>
#define size 90

int *AND(int a[], int b[])
{
    int c[size];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i] = a[i] & b[j];
        }
    }
    return c;
}

int *OR(int a[], int b[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i] =a[i] | b[j]);
        }
    }
    return c;
}

int *NOT(int a[])
{
    int c[size];
    for (int i = 0; i < 2; i++)
    {
        if (a[i] == 0)
        {
             c[i]=1);
        }
        else
        {
            c[i]= 0);
        }
    }
    return c;
}

int main()
{
    int a[] = {0, 1};
    int b[] = {0, 1};
    int c[size];
    char exp[size];
    printf("enter experation:");
    scanf(" %[^\n]s", &exp);
    int l = strlen(exp);
    for (int i = 0; i < l; i++)
    {
        if(exp[i] == '1')
        {
            
        }
    }
}