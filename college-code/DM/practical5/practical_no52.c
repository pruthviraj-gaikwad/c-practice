#include <stdio.h>
#define size 100

void compareBoth(int a[], int l, int b[], int j)
{
    int count = 0;
    for (int i = 0; i < l; i++)
    {
        for (int k = 0; k < j; k++)
        {
            int z;
            if (a[i] == b[k])
            {
                z = i - 1;
                if (z == -1)
                {
                    printf("comparing both %d found \n", a[i]);
                    break;
                }
                else
                {
                    while (z != -1)
                    {

                        if (a[i] == a[z])
                        {
                            count++;
                        }
                        z--;
                    }
                    if (count == 0)
                    {
                        printf("comparing both %d found \n", a[i]);
                        break;
                    }
                }
            }
        }
    }
}

int main()
{
    int a[size],n,m;
    printf("enter number of element in first array:");
    scanf("%d", &n);
    printf("enter element in array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int b[size];
    printf("enter number of element in second array:");
    scanf("%d", &m);
    printf("enter element in second array:");
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&b[i]);
    }
    compareBoth(a, n, b, m);
}