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

void unionofAandB(int a[], int l, int b[], int j)
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
                    printf("%d\n", a[i]);
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
                        printf("%d\n", a[i]);
                        break;
                    }
                }
            }
        }
    }

    for (int i = 0; i < l; i++)
    {
        int w = 0;
        for (int k = 0; k < j; k++)
        {
            if (a[i] != b[k])
            {
                w++;
            }
        }
        if (w == j)
        {
            printf("%d\n", a[i]);
        }
    }

    for (int i = 0; i < j; i++)
    {
        int p = 0;
        for (int k = 0; k < l; k++)
        {
            if (b[i] != a[k])
            {
                p++;
            }
        }
        if (p == l)
        {
            printf("%d\n", b[i]);
        }
    }
}

void difference(int a[], int l, int b[], int j)
{
    for (int i = 0; i < l; i++)
    {
        int w = 0;
        for (int k = 0; k < j; k++)
        {
            if (a[i] != b[k])
            {
                w++;
            }
        }
        if (w == j)
        {
            printf("%d\n", a[i]);
        }
    }
}

void complement(int a[], int l, int b[], int j)
{
    for (int i = 0; i < l; i++)
    {
        int w = 0;
        for (int k = 0; k < j; k++)
        {
            if (a[i] != b[k])
            {
                w++;
            }
        }
        if (w == j)
        {
            printf("%d\n", a[i]);
        }
    }
}

int main()
{
    int a[size], l, p, j;
    int u[size];
    int in = 0;
    printf("enter number of element in union set:");
    scanf("%d", &p);
    printf("enter element in union:");
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &u[i]);
    }

    printf("enter number of element in first set:");
    scanf("%d", &l);
    printf("enter element in array:");
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[size];
    printf("enter number of element in second set:");
    scanf("%d", &j);
    printf("enter element in second array:");
    for (int i = 0; i < j; i++)
    {
        scanf("%d", &b[i]);
    }

    do
    {
        int number;
        printf("what you want to perform:\n 1)Union:\n 2)Intersection:\n 3)Set difference:\n 4)Complement:");
        scanf("%d", &number);
        printf("\n");
        switch (number)
        {
        case 1:
            unionofAandB(a, l, b, j);
            break;
        case 2:
            compareBoth(a, l, b, j);
            break;
        case 3:
            difference(a, l, b, j);
            break;
        case 4:
            complement(u, p, a, l);
            break;
        default:
            break;
        }
        printf("if you want to perform again enter 1:");
        scanf("%d", &in);
        printf("\n");
    } while (in != 0);
}