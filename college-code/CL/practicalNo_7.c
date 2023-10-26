// Q.write a program for transpose of matrix
#include <stdio.h>
int main()
{
    int m, n;
    printf("enter row in matrix:");
    scanf("%d", &m);
    printf("enter column in matrix: ");
    scanf("%d", &n);
    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the element a[%d][%d] in first matrix:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("transpose of matrix :\n");
    int b[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }

    int result[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < m; k++)
            {
                sum = sum + a[i][k] * b[k][j];
                result[i][j] = sum;
            }
        }
    }
    printf("multilication of matrix and its transpose :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }
}
