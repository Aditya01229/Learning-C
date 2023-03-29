#include <stdio.h>
void fbnc(int a, int b, int c)
{
    int f;
    if (c == 0){
        exit(0);
    }
    printf("%d  ", b);
    f = b;
    b = a + b;
    a = f;
    c--;
    fbnc(a, b, c);
}
int main()
{
    fbnc(0, 1, 25);

}