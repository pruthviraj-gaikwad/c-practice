#include <stdio.h>
#define size 100
int main()
{
    int a[size], b[size];
    int n, m;
    printf("How many element in first array:");
    scanf("%d", &n);
    printf("Enter element in first array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("How many element in second array:");
    scanf("%d", &m);
    printf("Enter element in second array:");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[size];
    int z = n + m;
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = n; i < z; i++)
    {
        
        c[i] = b[i-n];
    }

    for (int i = 1; i < z; i++)
    {
        int j = i;
        while (j > 0 && c[j - 1] > c[j])
        {
            int temp = c[j];
            c[j] = c[j - 1];
            c[j - 1] = temp;
            j--;
        }
    }
    for (int i = 0; i < z; i++)
    {
        printf(" %d ", c[i]);
    }
}