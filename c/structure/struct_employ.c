#include <stdio.h>
#include <string.h>
struct employ
{
    char employName[100];
    int employId[20];
    char employAddress[500];
    char dessignesion[800];
    float salary;
};
int fun(struct employ* x)
{

    printf("name of employ : %s\n", x->employName);
    printf("Id : %d\n", x->employId);
    printf("address : %s\n",x->employAddress);
    printf("dessgnesion : %s\n",x->dessignesion);
    printf("salary : %.2f\n",x->salary);
}
int inputFun()
{
    struct employ e[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\nfor employ :%d\n", i + 1);
        printf("enter employ name:");
        scanf(" %[^\n]s", e[i].employName);
        printf("enter the id of employ:");
        scanf("%d", &e[i].employId);
        printf("enter the address of employ:");
        scanf(" %[^\n]s", e[i].employAddress);
        printf("your dessignesion:");
        scanf(" %[^\n]s", e[i].dessignesion);
        printf("enter the salarr per month:");
        scanf("%f",&e[i].salary);
    }
    printf("\ndispying information of employ\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\ninforamtion %d employ \n", i + 1);
        fun(&e[i]);
    }

}
int main()
{
   // struct employ e[2];
    printf("information of employ \n");
    inputFun();
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("\nfor employ :%d\n", i + 1);
    //     printf("enter employ name:");
    //     scanf(" %[^\n]s", e[i].employName);
    //     printf("enter the id of employ:");
    //     scanf("%d", &e[i].employId);
    //     printf("enter the address of employ:");
    //     scanf(" %[^\n]s", e[i].employAddress);
    //     printf("your dessignesion:");
    //     scanf(" %[^\n]s", e[i].dessignesion);
    //     printf("enter the salarr per month:");
    //     scanf("%f",&e[i].salary);
    // }
    // printf("dispying information of employ\n");
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("\ninforamtion %d employ \n", i + 1);
    //     fun(&e[i]);
    // }
}
