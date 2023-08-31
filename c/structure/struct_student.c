#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int regNo[7];
    int mark[50];
    char address[100];
    int phoneNO[10];
};
int fun(struct student* x)
{
    printf("name :%s\n",x->name);
    printf("regNo :%d\n",x->regNo);
    printf("mark :%d\n",x->mark);
    printf("address :%s\n",x->address);
    printf("phoneNo :%d\n",x->phoneNO);
   
}
int inputFun()
{   struct student p[2];
    // int n;
    // printf("who many student:");
    // scanf("%d",&n);
    for(int i=0;i<2;i++)
    {
        printf("for student %d\n",i+1);
        printf("enter the name of student:");
        scanf(" %[^\n]s",p[i].name);
        printf("enter the regNo of student:");
        scanf("%d",p[i].regNo);
        printf("enter mark of sum of 5 subject:");
        scanf("%d",p[i].mark);
        printf("enter address of student :");
        scanf(" %[^\n]s",p[i].address);
        printf("enter phoneNo of student:");
        scanf("%d",p[i].phoneNO);
    } 
    printf("\ndisplaying student details:\n");
    for(int i=0;i<2;i++)
    {   printf("\nstudent :%d\n",i+1);
        fun(&p[i]);
    }
}
int main()
{   
    printf("enter information of student\n");
    inputFun();
    // for(int i=0;i<2;i++)
    // {
    //     printf("for student %d\n",i+1);
    //     printf("enter the name of student:");
    //     scanf(" %[^\n]s",p[i].name);
    //     printf("enter the regNo of student:");
    //     scanf("%d",p[i].regNo);
    //     printf("enter mark of sum of 5 subject:");
    //     scanf("%d",p[i].mark);
    //     printf("enter address of student :");
    //     scanf(" %[^\n]s",p[i].address);
    //     printf("enter phoneNo of student:");
    //     scanf("%d",p[i].phoneNO);
    // } 
    // printf("displaying student details:");
    // for(int i=0;i<2;i++)
    // {   printf("\nstudent :%d\n",i+1);
    //     fun(&p[i]);
    // }
}