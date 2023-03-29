#include <stdio.h>
#include "areaperi.h"
int main(int argc, char const *argv[])
{
    float a = 3, b = 4, c = 5;
    printf("\n%.2f",AREASQUARE(a));
    printf("\n%.2f",AREACIRCLE(a));
    printf("\n%.2f",AREATRIANGLE(a, b, c));
    printf("\n%.2f",PERISQUARE(a));
    printf("\n%.2f",PERICIRCLE(a));
    printf("\n%.2f",PERITRIANGLE(a, b, c));
    return 0;
}
