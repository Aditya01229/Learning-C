// Pointers use to return more values using a function SUM, AVERAGE, STANDARD DEVIATION.
#include <stdio.h>
#include <math.h>
int power(int x, int y)
{
    int i, ans=1;
    for(i = 1; i <= y; i++){
        ans = ans * x;
    }
    return ans;
}
void function(int a, int b, int c, int d, int e, int *sum, float *avg, float *sd)
{
    *sum = a + b + c + d + e;
    *avg = *sum / 5.0;
    *sd = power(a - *avg, 2) + power(b - *avg, 2) + power(c - *avg, 2) + power(d - *avg, 2) + power(e - *avg, 2);
    *sd = sqrt(*sd / 5);
}
int main()
{
    int num1, num2, num3, num4, num5, sum;
    float avg, sd;
    printf("Enter the 5 numbers.");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    function(num1, num2, num3, num4, num5, &sum, &avg, &sd);
    printf("%d\n%f\n%f", sum, avg, sd);
}