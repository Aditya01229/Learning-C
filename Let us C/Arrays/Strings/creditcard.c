#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int sum = 0, a;
    char str[16];
    printf("Enter the Credit Cart number");
    gets(str);
    for (int i = 15; i >= 0; i--)
    {
        a = *(str + i) - 48;
        if (i % 2 == 0)
        {
            a = 2 * a;
            if (a > 9)
            {
                a -= 9;
            }
        }
            // printf("%d", a);
        sum += a;
        // printf("\n%d", sum);
    }
    if (sum % 10 == 0)
    {
        printf("Valid Credit Card!");
    }
    else
    {
        printf("Not a valid Credit Card!");
    }
    return 0;
}
