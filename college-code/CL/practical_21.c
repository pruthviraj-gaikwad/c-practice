#include<stdio.h>
int main()
{
    int a[100],n;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter element int array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int even_count=0;
    int odd_count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        even_count++;
        else
        odd_count++;
    }
    printf("even number in the array of size %d : %d\n",n,even_count);
    printf("odd number in the array of size %d : %d",n,odd_count);
}