#include <stdio.h>
#include <string.h>
#include <string.h>
#define size 10000

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
                else if(a[i]==' ')
                {
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
    char a[size];
    printf("enter first string:");
    scanf(" %[^\n]s", a);

    char b[size];
    printf("enter second string:");
    scanf(" %[^\n]s", b);

    int l = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        l++;
    }

    int j = 0;
    for (int i = 0; b[i] != '\0'; i++)
    {
        j++;
    }
    compareBoth(a, l, b, j);
}