#include <stdio.h>
#define MEAN(x, y) ((x + y) / 2)
int main(int argc, char const *argv[])
{
    printf("%.2f", MEAN(3.0, 4));
    return 0;
}
