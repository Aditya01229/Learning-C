#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 0, b = 1, upto;
    printf("Enter the number of terms of fibonacci series:");
    scanf("%d", &upto);
    if (upto==1)
    {
        printf("%d ", a);
    }
    else if (upto==2)
    {
        printf("%d %d ", a, b);
    }
    else{
        printf("%d %d ", a, b);
    for (int i = 0; i < (upto-2); i++)
    {
        int temp = a+b;
        a = b;
        b = temp;
        printf("%d ", b);
    }
    }
    return 0;
}
