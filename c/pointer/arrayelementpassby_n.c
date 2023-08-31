#include <stdio.h>
int main()
{
    int a[100];
    int n;
    printf("size of array:");
    scanf("%d", &n);
    printf("element in array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k, temp = a[0];
    printf("who many time you want to shift the array :");
    scanf("%d", &k);
    for (int j = 0; j < k; j++)
    {
        temp = a[0];
        for (int i = 1; i < n; i++)
        {

            a[i - 1] = a[i];
        }
        a[n - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("after shifting array:%d\n", a[i]);
    }
}
