#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n=0, p=0, o=0, e=0;
    int arr[25]= { 2, 3, 7, -24, 526, -52, 34,26, 312,-98,13,457,89134,45,-135,49,-37,48,246,-6, 46, 24, -3590, 236, 5};
    for (register int i = 0; i < 25; i++)
    {
        int a = arr[i];
        if(a < 0){
            n += 1;
            a = -1 * a;
            if(a % 2 == 0){
                e += 1;
                printf("\n%d", a);
            }
            else{
                o += 1;
            }
        }
        else if(a >= 0){
            p += 1;
            if(a % 2 == 0){
                e += 1;
            }
            else{
                o += 1;
            }
        }
    }
    printf(" The numbers of positive, negative, even, odd are %d, %d, %d, %d respectively.", p, n, e, o);
    
    return 0;
}
