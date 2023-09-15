#include <stdio.h>
#include <string.h>
struct employ
{
    char employName[100];
    int employId;
    char employAddress[500];
    char dessignesion[800];
    float salary;
};
int fun(struct employ *y)
{

    printf("name of employ : %s\n", y->employName);
    printf("Id : %d\n", y->employId);
    printf("address : %s\n", y->employAddress);
    printf("dessgnesion : %s\n", y->dessignesion);
    printf("salary : %.2f\n", y->salary);
}
int inputFun(int *x, int *m)
{
    int r=m-x+1;
    struct employ e(r);
    printf("\nfor employ :%d\n", r);
    printf("enter employ name:");
    scanf(" %[^\n]s", e(r).employName);
    printf("enter the id of employ:");
    scanf("%d", e(r).employId);
    printf("enter the address of employ:");
    scanf(" %[^\n]s", e(r).employAddress);
    printf("your dessignesion:");
    scanf(" %[^\n]s", e(r).dessignesion);
    printf("enter the salarr per month:");
    scanf("%f", e(r).salary);
    // struct employ e[x] = struct employ e(x);

    while (x != 0)
    {
        inputFun(x - 1);
    }
    printf("\ndispying information of employ\n");
    printf("\ninforamtion %d employ \n",x);
    fun(&e(x));
}
int main()
{
    // struct employ e[2];
    int n;
    printf("enter who many employ:");
    scanf("%d", &n);
    printf("information of employ \n");
    inputFun(&n, &n);
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
