#include <stdio.h>
int main()
{
    int n[3][3] = {
        2, 4, 3,
        6, 8, 5,
        3, 5, 1};
    int i, *ptr;
    ptr = n[0];  //HERE N[0] IS AND ARRAY AND ONLY WRITING n[0] WE ARE POINTING THE ADDRESS OF THE FIRST ELEMENT OF THAT ARRAY.
    for (i = 0; i <= 8; i++)
        printf("%d\n", *(ptr + i));
    return 0;
}