#include <stdio.h>
void show(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}
void copy(int *p, int *c, int n)
{
    for(register int i = 0; i < n; i++){
        *(c + i) = *(p + i);
    }   
}
void revcopy(int *p, int *c, int n){
    copy(p, c, n);
    // printf("\n");
    // show(c, n);
    for(register int i = 0; i < n/2; i++){
        int temp = *(c + i);
        *(c + i) = * (c + (n - (i + 1)));
        *(c + (n - (i + 1))) = temp;
    }
}
int main(int argc, char const *argv[])
{
    int arr[5]= {8, 6000, 745, 4, 93};
    int arrcopy[5];
    // copy(arr, arrcopy, 5);
    // show(arrcopy, 5);
    revcopy(arr, arrcopy, 5);
    show(arrcopy, 5);
    printf("\n");
    show(arr, 5);

    return 0;
}
