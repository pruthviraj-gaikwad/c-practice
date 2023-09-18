#include <stdio.h>
#define size 100

void compareBoth(int  a[], int l, int b[], int j)
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
    int a[size] = {1,3,5,7};
    int l = 4;
    int b[size] = {5,7,3,8};
    int j = 4;
    compareBoth(a, l, b, j);
}