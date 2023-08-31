#include <stdio.h>
int main()
{
    int currentyear;
    int yourAge;
    printf("currentyear");
    scanf("%d", &currentyear);
    printf("yourAge");
    scanf("%d", &yourAge);
    printf("you born  in the %d year. \n", currentyear-yourAge);
    return 0;
}