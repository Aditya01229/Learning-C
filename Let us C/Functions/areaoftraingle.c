//  This is a code to find the area of a triangle.
#include <stdio.h>
#include <math.h>
float area(float a, float b, float c)
{
    float S, area;
    S = (a + b + c) / 2;
    area = sqrtf(S* (S-a)*(S-b)*(S- c));
    return area;
}
int main()
{
    float a, x, y, z;
    printf("Enter the sides of the triangle-");
    scanf("%f %f %f", &x, &y, &z);
    a = area(x, y, z);
    printf("\nArea of the triangle is %.2f", a);
}