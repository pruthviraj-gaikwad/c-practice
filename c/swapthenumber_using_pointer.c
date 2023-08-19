#include<stdio.h>
int swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
   int a,b;
   printf("enter the 1st number:");
   scanf("%d",&a);
   printf("enter the 2nd number:");
   scanf("%d",&b);
   swap(&a,&b);
   printf("after swap value of 1st is:%d\n",a);
   printf("after swap value of 2nd is:%d",b);

}