#include<stdio.h>
int main()
{
    float a;
    printf("enter the desimal ponit:");
    scanf("%f",&a);
    printf("integer part is %d",(int)a);
    printf("desimal part is =%.2f",a-(int)a);

}