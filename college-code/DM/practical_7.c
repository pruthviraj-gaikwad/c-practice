#include <stdio.h>

float TriangleArea(float base, float height)
{
    return 0.5 * base * height;
}

float SquareArea(float sideLength)
{
    return sideLength * sideLength;
}

float RectangleArea(float length, float width)
{
    return length * width;
}

float circularArea(float radius)
{
    return 3.14 * radius * radius;
}
int main()
{
    int shape;
    printf("Enter the shape \n1) for triangle\n 2) for square\n 3) for rectangle\n4) for circle: ");
    scanf("%d", &shape);

    switch (shape)
    {
   
    case 1:
    {
        float base, height;
        printf("Enter base and height of the triangle: ");
        scanf("%f %f", &base, &height);
        float triangleArea = TriangleArea(base, height);
        printf("Area of the triangle: %.2f\n", triangleArea);
        break;
    }
    case 2:
    {
        float sideLength;
        printf("Enter side length of the square: ");
        scanf("%f", &sideLength);
        float squareArea = SquareArea(sideLength);
        printf("Area of the square: %.2f\n", squareArea);
        break;
    }
    case 3:
    {
        float length, width;
        printf("Enter length and width of the rectangle: ");
        scanf("%f %f", &length, &width);
        float rectangleArea = RectangleArea(length, width);
        printf("Area of the rectangle: %.2f\n", rectangleArea);
        break;
    }
    case 4:
    {
        float radius;
        printf("Enter radius of circle: ");
        scanf("%f", &radius);
        float areaCircle = circularArea(radius);
        printf("Area of the circle: %.2f\n", areaCircle);
        break;
    }
    default:
        printf("Invalid shape. Please enter t, s, or r.\n");
        break;
    }

    return 0;
}
