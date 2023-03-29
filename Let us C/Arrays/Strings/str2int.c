#include <stdio.h>
#include <string.h>
#include <stdio.h>
float power(float a, int b)
{
    int i;
    float ans = 1;
    for(i=1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    char str[100];
    gets(str);
    char *ptr = str;
    int len = (strlen(str) - 1), num=0;
    len = power(10, len);
    while(*ptr != '\0'){
        int a = *ptr;
        a = a-48;
        num = num + a*len;
        len /= 10;
        ptr++;
    }
    printf("%d", num);
    return 0;
}
