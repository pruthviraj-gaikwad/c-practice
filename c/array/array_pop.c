#include <stdio.h>
int pop(int x, int arr[])
{
    int p[100];
    for (int i = 0; i < x; i++)
    {
        p[i] = arr[i];
    }
    p[x - 1] = '\0';

    for (int i = 0; i < x; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
}
int push(int x, int b[],int m)
{
    int h[100];
    for (int i = 0; i < x; i++)
    {
        h[i] = b[i];
    }
    h[x - 1] = m;
    for (int i = 0; i < x; i++)
    {
        printf("%d ", h[i]);
    }
    printf("\n");
}
int main()
{
    int a[100];
    int n;
    int m;
    printf("enter a size of array:");
    scanf("%d",&n);
    printf("enter element in array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter a element you want to add at last position:");
    scanf("%d", &m);

    pop(n, a);
    //     for(int i=0;i<n;i++)
    //     {
    //         printf(" %d ",a[i]);
    //     }
    // }
    push(n, a, m);
}
