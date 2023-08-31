#include<stdio.h>
int main()
{
    double CelsiusDegree,FahrenheitDegrees;
    printf("CelsiusDegrees");
    scanf("%lf",&CelsiusDegree);
    FahrenheitDegrees=CelsiusDegree*1.8+32;
    printf("FahrenheitDegrees :%.2lf",FahrenheitDegrees);

} 