#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    for(c=1; c<31; c++){
        for(b=1; b<31; b++){
            for(a=1; a<31; a++){
                if(a*a == b*b + c*c && b>c){
                    printf("\n%d,%d,%d is a pythagorean triplet", c, b, a);
                    break;
                }
            }
        }
    }
    return 0;
}
