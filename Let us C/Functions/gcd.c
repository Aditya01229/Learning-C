#include <stdio.h>
int gcd(int x, int y)
{
    int a, b;
    while(y>0)
    {
        a = x / y;
        // printf("%d", a);
        b = y;
        y = x - (a * y);
        x = b;
        // printf("\n%d   %d", x, y);
        // printf("%d", x);
    }
    return x;
}
int main()
{
    int a, b, ans;
    printf("Enter the numbers");
    scanf("%d %d", &a, &b);
    ans = gcd(a, b);
    printf("%d", ans);
}