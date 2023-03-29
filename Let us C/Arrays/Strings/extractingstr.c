#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int a, b, i;
    char str[100];
    gets(str);
    printf("\nStarting-");
    scanf("%d", &a);
    printf("\nNumber of elements-");
    scanf("%d", &b);
    i = b + a;
    if (b == 0)
    {
        printf("%s", (str + a));
    }
    else
    {
        while (*str + a != '\0')
        {
            if (a == i)
            {
                break;
            }
            printf("%c", *(str + a));
            a++;
        }
    }
    return 0;
}
