#include <stdio.h>
void factors(int x)
{
    int i;
    while (x > 1)
    {
        for (i = 2; i <= x; i++)
        {
            if (x % i == 0)
            {
                printf("%d ", i);
                x = x / i;
                break;
            }
        }
    }
}
int main()
{
    int num;
    printf("Enter the number you want factors of:");
    scanf("%d", &num);
    factors(num);
}