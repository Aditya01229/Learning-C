#include <stdio.h>
void show(int m, int *p){
    for(int i=0; i<m; i++){
        printf("%d ", *(p+i));
    }
}
void shift2(int m, int *p){
    int temp1 = *p;
    int temp2 = *(p+1);
    for(int i=0; i<m-2; i++){
        *(p+i) = *(p+(i+2));
    }
    *(p+(m-2)) = temp1;
    *(p+(m-1)) = temp2;
}
int main(int argc, char const *argv[])
{
    int m=9, arr[9]={1,2,3,4,5,6,7,8,9};
    shift2(m, arr);
    show(m, arr);
    return 0;
}
