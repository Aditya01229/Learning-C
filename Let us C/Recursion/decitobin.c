#include <stdio.h>
float power(int a, int b)
{
    int i;
    int ans = 1;
    for (i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int bin1(int x)
{
    int a, sum, b = 0;
    while (x != 0)
    {
        sum = 0;
        for (a = x; a > 1; a = a / 2)
        {
            sum += 1;
        }
        b = b + power(10, sum);
        x = x - power(2, sum);
    }
    return b;
}
int main()
{
    int ans;
    printf("Enter the number you want to convert to binary:");
    scanf("%d", &ans);
    ans = bin1(ans);
    printf("%d", ans);
    return 0;
}