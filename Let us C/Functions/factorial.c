#include <stdio.h>
int fact(int x)
{
    int fact = 1, i;
    for(i=1; i<=x; i++){
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int a, b;
    b = 6;
    a = fact(b);
    printf("%d", a);
}