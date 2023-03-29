#include <stdio.h>
void roman(int x)
{
    int n, i, a, n2;
    for (i = 1000; x >= 1; i /= 10)
    {
        n = x / i;

        if (n <= 3)
        {
            for (a = 1; a <= n; a++)
            {
                if (x >= 1000)
                {
                    printf("M");
                }
                if (x >= 100 && x < 1000)
                {
                    printf("C");
                }
                if (x >= 10 && x < 100)
                {
                    printf("X");
                }
                if (x >= 1 && x < 10)
                {
                    printf("I");
                }
            }
        }
        if (n == 4)
        {
            if (x > 100 && x < 1000)
            {
                printf("CD");
            }
            if (x > 10 && x < 100)
            {
                printf("XL");
            }
            if (x > 1 && x < 10)
            {
                printf("IV");
            }
        }
        if (n > 4 && n <= 8)
        {
            n2 = n;
            if (x > 100 && x < 1000)
            {
                printf("D");
                n2 = n2 - 5;
            }
            if (x > 10 && x < 100)
            {
                printf("L");
                n2 = n2 - 5;
            }
            if (x > 1 && x < 10)
            {
                printf("V");
                n2 = n2 - 5;
            }
            for (a = 1; a <= n2; a++)
            {
                if (x >= 1000)
                {
                    printf("M");
                }
                if (x >= 100 && x < 1000)
                {
                    printf("C");
                }
                if (x >= 10 && x < 100)
                {
                    printf("X");
                }
                if (x >= 1 && x < 10)
                {
                    printf("I");
                }
            }
        }
        if (n == 9)
        {
            if (x > 100 && x < 1000)
            {
                printf("CM");
            }
            if (x > 10 && x < 100)
            {
                printf("XC");
            }
            if (x > 1 && x < 10)
            {
                printf("IX");
            }
        }
        x = x - n * i;
    }
}
int main()
{
    int num;
    printf("Enter the number you want to convert in Roman Numerals:");
    scanf("%d", &num);
    roman(num);
}