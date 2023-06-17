#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "basicfunc.c"
#include "division.c"

int main(int argc, char const *argv[])
{
    int crt=0;
    // Here we have used srand for seeding. By seeding the program generates different random number instead of the same number.
    srand(getpid());
    // Just for checking how the arrays are producing.
    int arr1[10], arr2[10],arr3[10];
    level3(arr1, arr2, arr3);
    printf("\nLet's Start the Quiz.\nGive answer in 1, 2, 3, 4.");
    for (int i = 0; i < 10; i++)
    {
        int op[4], co, ans;
        co = arr1[i] * arr2[i] * arr3[i] / arr3[i];
        options(op, co);
        printf("\nQuestion %d: %d / %d = ?", i+1, arr1[i]*arr2[i]*arr3[i], arr3[i]);
        printf("\nOptions:");
        for (int j = 0; j < 4; j++)
        {
            printf("\n%d) %d", (j + 1), op[j]);
        }
        printf("\nAnswer:");
        scanf("%d", &ans);
        if(op[ans - 1] == co){
            crt += 1;
        }
    }
    printf("\nYou answered %d questions correct!", crt);
    printf("\n\nNow the questions with their correct answers are:");
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d) %d / %d = %d", (i+1),  arr1[i]*arr2[i]*arr3[i], arr3[i], (arr1[i] * arr2[i] * arr3[i] / arr3[i]));
    }  
    return 0;
}