#include <stdio.h>
void addsubt(int x, int y, int *add, int *subt)
{
    *add = x + y;
    *subt = x - y;
}

int main(int argc, char const *argv[])
{
    int a, b, add, subt;
    printf("Enter the first and second number to perform addition an subtraction:");
    scanf("%d %d", &a, &b);
    addsubt(a, b, &add, &subt);
    printf("Addition of the numbers is %d and subtraction is %d.", add, subt);
    return 0;
}
