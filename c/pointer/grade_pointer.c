// #include <stdio.h>
// int main()
// {
//     int grade1=50;
//     // =, grade2;
//     // printf("grade1:");
//     // scanf("%d\n", &grade1);
//     int *p;
//     p = &grade1;
//     printf("%d", *p);

//     return 0;
// }
#include<stdio.h>
int main()
{
    int grd1;
    printf("grd1:");
    scanf("%d",&grd1);
    int grd2;
    printf("grd2:");
    scanf("%d",&grd2);
    int *p=&grd1;
    int *f=&grd2;
    printf("%d\n",*p);
    printf("%p\n",p);
    printf("%d\n",*f);
    printf("%p",f);
}