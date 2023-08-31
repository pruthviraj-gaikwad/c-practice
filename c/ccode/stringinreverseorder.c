#include<stdio.h>
#include<string.h>
int main()
{
   char str[10];
   int i=0,count=0;
   scanf("%ch",&str);
   while(str[i]!='\0')
   {
    count++;
    i++;
   }
   int n=count;
   for(int i=n-1;i>=0;i--)
   {
    str[i];
   }
}
