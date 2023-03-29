#include <stdio.h>
int smallest(int *p, int n)
{
    int min;
    for (register int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            if (*(p + i) < min)
            {
                min = *(p + i);
            }
        }
        if (i == 0)
        {
            min = *(p + i);
        }
    }
    return min;
}
int main(int argc, char const *argv[])
{
    int arr[25] = {25, 43, 14, 75, 24, 36, 64, 73, 76, 6, 8, 2, 38, 97, 56, 26, 757, 2, 74, 748, 73, 74, 44, 66, 80};
    int min = smallest(arr, 25);
    printf("%d", min);
    return 0;
}
