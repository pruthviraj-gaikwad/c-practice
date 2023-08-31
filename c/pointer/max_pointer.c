#include<stdio.h>
void findMaxMin(int a,int b,int *pMax,int *pMin){
    if(a>b) {
        *pMax=a;
        *pMin=b;
    }
    else{
        *pMax=b;
        *pMin=a;
    }
}
int main()
{
    int a,b;
    int min,max;
    printf("enter two value:");
    scanf("%d %d",&a,&b);
    findMaxMin(a,b,&max,&min);
    printf("max and min between two no is %d and %d",max,min);
}