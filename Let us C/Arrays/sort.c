#include <stdio.h>

// DISPLAYING THE ARRAY
void show(int *p, int n)
{
    // printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}

// SELECTION SORT
void selection(int *p, int n)
{
    int i, a;
    for (i = 0; i < n - 1; i++)
    {
        for (a = i + 1; a < n; a++)
        {
            if (*(p + i) > *(p + a))
            {
                int temp;
                temp = *(p + i);
                *(p + i) = *(p + a);
                *(p + a) = temp;
            }
        }
    }
}

// BUBBLE SORT
void bubble(int *p, int n)
{
    int i, a, b;
    for (i = n - 1; i > 0; i--)
    {
        for (a = 0; a < i; a++)
        {
            b = a + 1;
            if (*(p + a) > *(p + b))
            {
                int temp;
                // printf("\n%d:%d %d:", i, a, b);
                temp = *(p + b);
                *(p + b) = *(p + a);
                *(p + a) = temp;
                // show(p, 5);
            }
        }
    }
}

// INSERTION SORT
void insersion(int *p, int n)
{
    for ( register int i = 1; i < n; i++)
    {
        for (register int a = 0; a < i; a++)
        {
            if (*(p + i) < *(p + a))
            {
                int temp;
                    temp = *(p + i);
                // CODE FOR SHIFTING
                for ( register int b = i; b > a ; b--)
                {
                    *(p + b) = *( p + (b-1));
                    // printf("\n");
                    // show(p, 6);
                }
                *(p + a) = temp;
                // printf("\n");
                // show(p, 6);
                // printf("\n");

            }
        }
    }
}

// REVERSING AN ARRAY
void reverse(int *p, int n)
{
    int i;
    for (i = 0; i < n / 2; i++)
    {
        int temp;
        temp = *(p + i);
        *(p + i) = *(p + (n - (i + 1)));
        *(p + (n - (i + 1))) = temp;
        // show(p,5);
        // printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {32, 57, 24, 56, 16};
    // selection(arr, 5);
    // show(arr, 5);
    // bubble(arr, 5);
    // show(arr, 5);

    // printf("\n");
    // reverse(arr, 5);
    // show(arr, 5);

    int arr2[6] = {1, 2, 3, 4, 5, 6};
    printf("\n");
    reverse(arr2, 6);
    show(arr2, 6);

    // printf("\n");
    // selection(arr2, 6);
    // show(arr2, 6);

    // printf("\n");
    // reverse(arr2, 6);
    // show(arr2, 6);

    printf("\n");
    insersion(arr2, 6);
    // printf("\n");
    show(arr2, 6);
    return 0;
}
