#include <stdio.h>
void show(int row, int col, int (*p)[col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%-4d", *(*(p + i) + j));
        }
        printf("\n");
    }
}
void add(int row, int col, int (*p)[col], int (*q)[col], int (*r)[col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(*(r + i) + j) = *(*(p + i) + j) + *(*(q + i) + j);
        }
    }
}
int main(int argc, char const *argv[])
{
    int m = 3, n = 4;
    int arr1[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int arr2[3][4] = {{12, 11, 10, 9}, {8, 7, 6, 5}, {4, 3, 2, 1}};
    int ans[m][n];
    add(m, n, arr1, arr2, ans);
    show(m, n, ans);
    return 0;
}
