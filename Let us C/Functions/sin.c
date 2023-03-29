// sin answer of angle in degrees.
#include <stdio.h>
float power(float a, int b)
{
    int i;
    float ans = 1;
    for (i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int fact(int x)
{
    int fact = 1, i;
    for (i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
float sin1(int angle)
{
    int n, term;
    float x;
    if (angle >= 360)
    {
        angle = angle % 360;
    }
    x = angle;
    // printf("%f", x);
    x = (x / 180) * 3.14159265359;
    // printf("%f", x);
    float sin = x, check;
    for (n = 1; n <= 5; n++)
    {
        term = 2 * n + 1;
        // check = (power(-1, n) * (power(x , term)/ fact(term)));
        // printf("%lf\n", check);
        sin = sin + (power(-1, n) * (power(x, term) / fact(term)));
    }
    return sin;
}
int main()
{
    float sin;
    int angle;
    printf("Enter the angle in degrees:");
    scanf("%d", &angle);    
    sin = sin1(angle);
    printf("sin(%d) = %.3f", angle, sin);
}