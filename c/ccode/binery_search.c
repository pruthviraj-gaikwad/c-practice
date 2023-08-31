#include <stdio.h>
#include <math.h>
int main()
{
    int a[100];
    int n;
    printf("enter size of array:");
    scanf("%d", &n);
    printf("element in array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int c;
    printf("enter element you want to search :");
    scanf("%d", &c);
    int beg = 0, found = 0;
    int end = n - 1;
    int mid = (beg + end) / 2;
    for (int i = 0; i < n; i++)
    {
        if (c == a[mid])
        {
            found++;
            printf("element is found at %d and has index %d\n", mid + 1, i);
        }
        else if (c < a[mid])
        {
            end = mid - 1;
        }
        else if (c > a[mid])
        {
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
    }
    if (found == 0)
        printf("element is no found");
}