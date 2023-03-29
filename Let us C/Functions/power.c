#include <stdio.h>
float power(float a, int b)
{
    int i;
    float ans = 1;
    for(i=1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}
int main()
{
    float z;
    z = power(2.5,5);
    printf("%f", z);
}