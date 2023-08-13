#include<stdio.h>
int main()
{
    int a;
    printf("total second :");
    scanf("%d",&a);
    int hour;
    hour=a/3600;
    int minute;
    minute=(a-3600)/60;
    int second;
    second=(a-3600)%60;
    printf("your time is %d:%d:%d",hour,minute,second);
}