#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[1000];
    int d=0, dot=0, al=0, size, i, get;
    // scanf("%s", &a);
    gets(a);
    size = strlen(a);
    printf("%d", size);
    for(i = 0; i<= size; i++){
        if(a[i]== '.')
        dot = 1;
        if((a[i]>='a' && a[i]<= 'z') || (a[i]>='A' && a[i]<= 'Z'))
        al = 1;
        if((a[i]>='0' && a[i]<= '9'))
        d = 1;
    }
    if((d == 1 && dot == 1 && al == 1) || al == 1){
        printf("STRING");
    }
    else if(d == 1 && dot == 1 && al == 0){
        printf("FLOAT");
    }
    else if(d == 1 && dot == 0 && al == 0){
        printf("INT");
    }
    else{
        printf("SPECIAL");
    }
    return 0;
}