#include <stdio.h>
// #include <stdlib.h>
void auto1()
{
    // {
    //     int a = 20;
    // }
    // printf("%d", a);
    // //This will give error as auto scope is within the block.
}
void static1()
{
    static int a;
    if (a == 10)
    {
    }
    else
    {
        a++;
        printf("%d\n", a);
        register1();
    }
}
int main(int argc, char const *argv[])
{
    auto1(); // This is the default storage class.
    static1(); //Static variables can be ony used in the specific block but their changed alue is retained even if the command is out of the block unlike the auto variables.
    // Register and auto class is all similar. The diff is that tha auto class storres the value in memory in the register stores the value in cpu register. Registers are used to speeedd up the program. i.e. store the variables that we use maximum times e.g. for loops to speed up the program as the registers are stored in cpu register they are easily available.
    // Difference between declaration and defination.
    // DECLARATION - To declare and variable and space is not reserved for it. i.e. not assigning the value.
    // DEFINATION - To declare and define a value to the variabe(space is reserved).

    // We will need the concept of define and declare in external vairiable.


    return 0;
}
