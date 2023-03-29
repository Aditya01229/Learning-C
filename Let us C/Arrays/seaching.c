#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, arr[25], sum=0, search;
    for(i=0; i<25; i++){
        scanf("%d", (arr+i));
    }
    printf("\nEnter the number you want to search:");
    scanf("%d", &search);
    for(i=0; i<25; i++){
        if(search == *(arr + i)){
            sum += 1;
        }
    }
    if(sum!= 0){
        printf("\nThe number %d is in the array and it appears %d times.", search, sum);
    }
    else{
        printf("The number is not in the array.");
    }
    return 0;
}
