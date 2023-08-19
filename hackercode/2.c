#include<stdio.h>
#include<string.h>
int main()
{
    char c;
    printf("enter character:");
    scanf(" %c",&c);
    char str[25];
    printf("enter string:");
    scanf(" %s",str);
    char sen[50];
    printf("enter sentence:");
    scanf(" %[^\n]s",sen);
    printf("%c\n",c);
    printf("%s\n",str);
    printf("%s",sen);
}