// c program for marge two array and sort
#include <stdio.h>
int sort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int y = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > y)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = y;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int a[100];
    int n;
    int b[100];
    int j;
    int c[200];
    printf("enter number of element in first array:");
    scanf("%d", &n);
    printf("enter element in array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter number of element in second array:");
    scanf("%d", &j);
    printf("enter element in array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = n; i < j + n; i++)
    {
        c[i] = b[i - n];
    }
    sort(c, n + j);
}