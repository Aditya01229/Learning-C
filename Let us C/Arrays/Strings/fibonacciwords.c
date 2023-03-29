#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str1[200] = "a", str2[200] = "b", strtemp[200] = "b";
    for (int i = 0; i <= 5; i++)
    {
        strcat(str2, str1);
        printf("%s ", str2);
        strcpy(str1, strtemp);
        strcpy(strtemp, str2);
    }
    return 0;
}
