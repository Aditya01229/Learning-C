#include <stdio.h>
int show(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}
int generate(int *p, int n)
{
    for (int i = 2; i <= n + 1; i++)
    {
        *(p + (i - 2)) = i;
    }
}
int prime(int *p, int n)
{
    int max = *(p +n);
    for (register int i = *(p); (i * i) < max; i++)
    {
        // printf("OK");
        for (int a = 0; a < n; a++)
        {
            if (*(p + a) % i == 0 && *(p + a) >= (i * i))
            {
                *(p + a) = 0;
            }
        }
        // printf("%d %d", i, *(p +(n-1)));
    }
}
int main(int argc, char const *argv[])
{
    int arr[99];
    generate(arr, 99);
    printf("\n");
    // show(arr, 99);
    printf("\n");
    prime(arr, 99);
    // show(arr, 99);
    printf("\n");
    for(register int i = 0; i < 99; i++)
    {
        if(*(arr + i)!= 0)
        {
            printf("%d ", *(arr + i));
        }
    }
    printf("are the prime numbers.");
    return 0;
}
