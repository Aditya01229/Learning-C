#include <stdio.h>
int main()
{
    int N, S, i; 
    scanf("%d %d", &N, &S);
    int arr[N];
        for (i = 0; i < N ; i++)
        {
            scanf("%d", (arr + i));
        }
    for (int a = 0; a < N; a++)
    {
        int sum = *(arr+a);
        for (int b=(a+1); b<N; b++){
            sum = sum + *(arr+b);
            if(sum == *(arr+a)){
                continue;
            }
            if(sum==S){
                printf("\n%d %d", a+1, b+1);
                break;
            }
        }
    }
    return 0;
}
