#include <stdio.h>
#include <math.h>

void funAdd(double a, double b)
{
    printf("additon =%lf\n", a + b);
}

void funSub(double a, double b)
{
    printf("substraction  =%lf\n", a - b);
}

void funMul(double a, double b)
{
    printf("multiplication  =%lf\n", a * b);
}

void funDiv(double a, double b)
{
    double x = fdiml(a, b);
    printf("division  =%lf\n", x);
}

void funMod(double a, double b)
{
    double x = fmod(a, b);
    printf("modulus =%lf\n", x);
}

void funSquare(double a, double b)
{
    printf("square of first num  =%lf\n", a * a);
    printf("square of second num =%lf\n", b * b);
}

void funSquareRoot(double a, double b)
{
    double x = sqrt(a);
    printf("square root  of first num  =%lf\n", x);
    double y = sqrt(b);
    printf("square root  of second num =%lf\n", y);
}
void funCube(double a, double b)
{
    printf("cube of first num  =%lf\n", a * a * a);
    printf("cube of second num =%lf\n", b * b * b);
}

void funCubeRoot(double a, double b)
{
    double x = cbrt(a);
    printf("cube root of first num  =%lf\n", x);
    double y = cbrt(b);
    printf("cube root of second num =%lf\n", y);
}

void funLog(double a, double b)
{
    double x = log10(a);
    printf("log of  first num  =%lf\n", x);
    double y = log10(b);
    printf("log  of second num =%lf\n", y);
}

int main()
{
    int c = 0;
    do
    {
        double a, b;
        int n;
        printf("enter first number:");
        scanf("%lf", &a);
        printf("enter second number:");
        scanf("%lf", &b);
        printf("enter oprtation you want to perform \n1)add,2)Sub,3)mul,4)div,5)mod,6)square,7)square root,8)cube,9)cube root,10)log:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            funAdd(a, b);
            break;
        case 2:
            funSub(a, b);
            break;
        case 3:
            funMul(a, b);
            break;

        case 4:
            funDiv(a, b);
            break;
        case 5:
            funMod(a, b);
            break;
        case 6:
            funSquare(a, b);
            break;
        case 7:
            funSquareRoot(a, b);
            break;
        case 8:
            funCube(a, b);
            break;
        case 9:
            funCubeRoot(a, b);
            break;
        case 10:
            funLog(a, b);
            break;
        default:
            break;
        }
        printf("if you want to perform another opertion (enter 1):");
        scanf("%d", &c);
    } while (c != 0);
}