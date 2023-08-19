#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    puts("enter the statement:");
    gets(str);
    int size=0;
    int k=0;
    while(str[k]!='\0');
    {
        size++;
        k++;
    }
    puts("size of string :%d",size);
    return 0;
}