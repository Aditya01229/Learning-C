#include <stdio.h>
int show(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}
int main(int argc, char const *argv[])
{
    int n, x, a, b, c;
    printf("n=");
    scanf("%d", &n);
    int arr[n];
    printf("x=");
    scanf("%d", &x);
    printf("\nArray -");
    for( a = 0; a < n; a++){
        scanf("%d", (arr + a));
    }
    // show(arr, n);
    for(a = 0; a<(n-2); a++){
        for(b = a + 1; b<(n-1); b++){
            for(c=(b+1); c<n; c++){
                if(*(arr+a) + *(arr+b)+ *(arr+c)== x){
                    printf("\n%d %d and %d is a triplet whose sum is %d", *(arr+a), arr[b], c[arr], x);
                }
            }
        }
    }
    return 0;
}
