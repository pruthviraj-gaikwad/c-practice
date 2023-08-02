#include <stdio.h>
int main()
{
    int arr[50], n, i, average, sum=0;
    printf("enter the size of array \n");
    scanf("%d", &n);
    printf("enter the number ");
    for (i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i =0; i < n; i++)
    {
        sum = arr[i] + sum;
    }
    if (sum != 0)
    {
        average = sum / n;
    }
    printf("average is %d",average);
}

