#include <stdio.h>
void show(int *p, int n)
{
    // printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}
void bubble(int *p, int n)
{
    int i, a, b;
    for (i = n - 1; i > 0; i--)
    {
        for (a = 0; a < i; a++)
        {
            b = a + 1;
            if (*(p + a) > *(p + b))
            {
                int temp;
                // printf("\n%d:%d %d:", i, a, b);
                temp = *(p + b);
                *(p + b) = *(p + a);
                *(p + a) = temp;
                // show(p, 5);
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[5] = {1,5,6,11,100};
    int diff1, diff2;
    bubble(arr, 5);
    show(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        for (int a = (i + 1); a < 5; a++)   
        {
            diff1 = *(arr + a) - *(arr + i);
            if(a == 1){
                diff2 = diff1;
            }
            else if(diff1<diff2){
                diff2 = diff1;
            }
                // printf("%d", diff2);
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int a = (i + 1); a < 5; a++)   
        {
            diff1 = *(arr + a) - *(arr + i);
            if(diff1 == diff2)
            {
                printf("\n%d %d", *(arr + i), *(arr +a));
            }  
        }
        
    }
    
    return 0;
}
