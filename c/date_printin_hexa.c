#include<stdio.h>
int main()
{
    int date;
    printf("enter the date:");
    scanf("%d",&date);
    int month;
    printf("enter the month:");
    scanf("%d",&month);
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    printf("date in Hexa:0x%x\n",date);
    printf("month in Hexa:0x%x\n",month);
    printf("year in Hexa:0x%x\n",year);
}