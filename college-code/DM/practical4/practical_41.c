#include <stdio.h>
#include <string.h>
#define size 100

void compareBoth(char a[], int l, char b[], int j)
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
                    printf("comparing both %c found \n", a[i]);
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
                        printf("comparing both %c found \n", a[i]);
                        break;
                    }
                }
            }
        }
    }
}

int main()
{
    char a[size] = "sggs";
    int l = strlen(a);
    char b[size] = "message";
    int j = strlen(b);
    compareBoth(a, l, b, j);
}