#include <stdio.h>
#define UP2LOW(x) x = x + 32;
int main(int argc, char const *argv[])
{
    char num;
    scanf("%c", &num);
    UP2LOW(num)
    printf("%c", num);
    return 0;
}
