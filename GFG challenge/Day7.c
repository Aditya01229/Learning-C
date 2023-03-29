#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int m, n, times=0;
    scanf("%d %d", &m, &n);
    int arr1[m], arr2[n];
    for(register int i=0; i<m; i++){
        scanf("%d", (arr1+i));
    }
    for(register int i=0; i<n; i++){
        scanf("%d", (arr2+i));
    }
    for (int a = 0; a < m; a++)
    {
        for (int b = 0; b < n; b++)
        {
            if(pow(*(arr1+a), *(arr2+b)) > pow(*(arr2+b), *(arr1+a))){
                times+=1;
            }
        }
        
    }
    printf("\n\n%d", times);
    
    return 0;
}
