#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}},
        *n = x[0];

    printf("\n%d", *(*(x + 2) + 1));
    printf("\n%d", *(*x + 2) + 5);
    printf("\n%d", *(*(x + 1)));
    printf("\n%d", *(*(x) + 2) + 1);
    printf("\n%d", *(*(x + 1) + 3));
    printf("\n%d", *n);
    printf("\n%d", *(n + 2));
    printf("\n%d", (*(n + 3) + 1));
    printf("\n%d", *(n + 5) + 1);
    printf("\n%d", ++*n);
    return 0;
}
