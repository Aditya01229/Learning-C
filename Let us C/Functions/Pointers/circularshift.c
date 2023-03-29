#include <stdio.h>
void cirshift(int *c, int *b, int *a)
{
    int shift;
    shift = *a;
    *a = *b;
    *b = *c;
    *c = shift;
}
int main()
{
    int a, b, c;
    printf("Enter the initial values of a, b, c- ");
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d\nb = %d\nc = %d", a, b, c);
    cirshift(&a, &b, &c);
    printf("\na = %d\nb = %d\nc = %d", a, b, c);
}