#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 10, b = 20, c  = 30, *aa, *bb, *cc;
    char z = 'G', *zz = &z;
    aa = &a;
    bb = &b;
    cc = &c;
    printf("%u %u %u %u", aa, bb, cc, zz);
    aa++;
    bb++;
    cc++;
    zz++;
    printf("\n%d %d %d", *bb, *cc, *zz);
    return 0;
}
