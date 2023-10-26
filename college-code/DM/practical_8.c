#include <stdio.h>

void AND(int *a, int *b, int *c, int n)
{
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] && b[i];
    }
}

void OR(int *a, int *b, int *c, int n)
{
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] || b[i];
    }
}

void NOT(int *a, int *c, int n)
{
    for (int i = 0; i < n; i++)
    {
        c[i] = !a[i];
    }
}

int main()
{
    int a[] = {0, 0, 1, 1};
    int b[] = {0, 1, 0, 1};
    int z[10], x[10];
    int n, m, k = 4;

    printf("Press 1 for AND Gate\n"
           "Press 2 for OR Gate\n"
           "Press 3 for NOT Gate\n");

    scanf("%d", &n);

    switch (n)
    {
    case 1:
        AND(a, b, z, 4);
        break;
    case 2:
        OR(a, b, z, 4);
        break;
    case 3:
        NOT(a, z, 4);
        break;
    default:
        printf("Invalid choice\n");
        return 1;
    }

    printf("Press 1 for AND\n"
           "Press 2 for OR\n"
           "Press 3 for NOT\n");

    scanf("%d", &m);

    switch (m)
    {
    case 1:
        AND(z, b, x, 4);
        break;
    case 2:
        OR(z, b, x, 4);
        break;
    case 3:
        NOT(z, x, 4);
        break;
    default:
        printf("Invalid choice\n");
        return 1;
    }

    printf("A  B  Y  Z\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d  %d  %d  %d\n", a[i], b[i], z[i], x[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        if (x[i] == 1)
        {
            k++;
        }

        else if (x[i] == 0)
        {
            k--;
        }
    }

    {

        if (k == 8)
        {
            printf("Tautology\n");
        }

        else if (k == 0)
        {
            printf("Contengicy\n");
        }
        else
        {
            printf("Contradiction\n");
        }
    }
    return 0;
}
