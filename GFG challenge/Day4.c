#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i=0, b;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", (arr + i));
    }
    for (i=0, b=0; i<n-1; b++){
        int a = *(arr + i);
        if(a==0){
            printf("%d", -1);
            break;
        }
        i = a+i;
    }
    printf("%d", b);
    return 0;
}
