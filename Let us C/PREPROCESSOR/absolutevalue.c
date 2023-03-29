#include <stdio.h>
#define AB(x) if(x>=0){x = x;}\
else if(x<0)\
{x = (-1 * x);}
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    AB(num)
    printf("The absolute value is %d", num);
    return 0;
}
