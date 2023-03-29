#include <stdio.h>
int func(int a, int b)
{
    return (a+b);
}
int main()
{
    int i = 4, a;
    a = func(i, ++i);
    printf("%d",a);
    printf("\n%d %d %d", a, ++a, a++);
}