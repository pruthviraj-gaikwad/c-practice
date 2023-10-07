#include<stdio.h>
int main()
{
    int m;
    int a[m][m];
    printf("enter how many row in square matrix:");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
         for (int j = 0; j < m; j++)
        {
            printf("enter the element a[%d][%d] in first matrix:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
