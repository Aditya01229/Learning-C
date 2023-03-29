#include <stdio.h>
print1(int x, int y){
    printf("%d x %2d = %2d\n", x, y, x*y);
    y++;
    if(y<11){
        print1(x, y);
    }
}
int main() {
    int i = 1, num;
    printf("Enter the number you want Table of:\n");
    scanf("%d", &num);
    print1(num,i);
    return 0;
}