#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    for (a = 1; a < 20; a++)
    {
        for (b = 1; b < 20; b++)
        {
            for (c = 1; c < 20; c++)
            {
                for (d = 1; d < 20; d++)
                {
                    if (a * a * a + b * b * b == c * c * c + d * d * d && a > b && c > d && a > c)
                    {
                        printf("\n%d is the ramanujan number", a * a * a + b * b * b);
                    }
                }
            }
        }
    }
    return 0;
}
