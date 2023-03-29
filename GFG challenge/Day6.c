#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", (arr+i));
    }
    for(int i=0; i<n; i++){
        if(k==*(arr+i)){
            printf("%d is found at index %d", k, i);
        }
    }
    return 0;
}
