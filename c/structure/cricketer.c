#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct cricketer{
        char firstName[20];
        char lastName[20];
        int age;
        float average;
    }cricketer;
    cricketer a[2];
    for(int i=0;i<2;i++) 
    {
        printf("enter firstname of cricketer:");
        scanf(" %[^\n]s",a[i].firstName);
        printf("enter age of cricketer:");
        scanf(" %d",&a[i].age);
        printf("enter average score:");
        scanf(" %f",&a[i].average);
    }   
    for(int i=0;i<2;i++) 
    {
        printf("name of cricketer : %s\n",a[i].firstName);
        printf("age : %d\n",a[i].age);
        printf("average :%f\n",a[i].average);
    }   
   
}