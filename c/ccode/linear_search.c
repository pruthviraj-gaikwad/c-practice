#include<stdio.h>
int main()
{
    int a[100];
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    printf("enter element in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     int no;
    printf("enter the no. you want to search:\n");
    scanf("%d",&no);
    for(int i=0;i<n;i++)
    {
        if(a[i]==no)
        {
            printf("number found at position  %d",i+1);
        }
    }
}