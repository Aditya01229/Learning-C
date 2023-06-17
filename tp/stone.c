#include <stdio.h>
// #include <string.h>
// #include <time.h>
#include <unistd.h>
#include <stdlib.h>
int printRandoms(int lower, int upper);
int main(int argc, char const *argv[])
{
    int com1, user1, users = 0, coms = 0;
    // Here we have used srand for seeding. By seeding the program generates different random number instead of the same number.
    srand(getpid());
    printf("This is a simple STONE, PAPER & SCISSOR game!");
    printf("\nEnter 1 for stone, 2 for paper, 3 for scissor!\nLet start the game.");
    for (int i = 0; i < 5; i++)
    {
        int user;
        int com = printRandoms(1,3);
        scanf("%d", &user);
        
        if (user==2 && com==1 || user==3 && com==2 || user==1 && com==3)
        {
            printf("You got a point");
            users+=1;
        }
        else if(user==1 && com==2 || user==2 && com==3 || user==3 && com==1){
            printf("Computer got a point!");
            coms+=1;
        }
    }
    printf("\nCOMPUTER=%d\nUSER=%d", coms, users);
    
    return 0;
}
int printRandoms(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;
    // Returning the generated number to the main function.
    return num;
}
