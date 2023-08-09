#include <stdio.h>
int main()
{
    int grade;
    printf("enter your grade:");
    scanf("%d", &grade);
    if (grade >= 40)
    {
        printf("congratulations you are pass ");
    }
    else
    {
        printf("you are fail ..beter lack next time");
    }
}
