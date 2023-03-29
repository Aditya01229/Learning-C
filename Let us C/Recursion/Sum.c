#include <stdio.h>
int disum(int x)
{
    int b;
    if(x == 1)
    {
        return 1;
    }
    else{
        b = (x % 10) + disum( x / 10);
    }
    return b;
}
int main()
{
    // Non Recusive.
    int a , b, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &a);
    // while(a >= 1)
    // {
    //     b = a % 10;
    //     sum = sum + b;
    //     a = a / 10;
    // }
    // printf("\nSum of the digits is %d", sum);
    b = disum(a);
    printf("\nSum of the digits is %d", b);
}