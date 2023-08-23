#include<stdio.h>
int main()
{
    int n;
    int b;
    int even_count=0;
    int odd_count=0;
    float a[100];
    int arr[100];
    printf("enter the size of array :");
    scanf("%d",&n);
    printf("enter element in array :");
    for (int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=a[i]*1000;
    }
    for (int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        even_count++;
        else
        odd_count++;
    }
     printf("even number in the array of size %d : %d\n",n,even_count);
    printf("odd number in the array of size %d : %d",n,odd_count);
}