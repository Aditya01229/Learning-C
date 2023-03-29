#include <stdio.h>
void show(int row, int col, int (*p)[col])
{
    for (int j = 0; j < col; j++)
    {
        printf("_____");
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        printf("|");
        for (int j = 0; j < col; j++)
        {
            printf("%-4d|", *(*(p + i) + j));
        }
        printf("\n|");
        for (int j = 0; j < col; j++)
        {
            printf("____|");
        }
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int m = 3, n = 4;
    int arr1[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    show(m, n, arr1);
    return 0;
}
