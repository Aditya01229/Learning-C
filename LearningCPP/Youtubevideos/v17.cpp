#include <iostream>
using namespace std;

inline int product(int a, int b); //Inline function
int staticvar(int a); // Static variable




// This is an example of default argument.. In  c++ we can set default argument here b = 5.. so for this function we need two arguments but if we only provide 1 argument then the compiler will automatically consider the second argument as 5 BUT if we provide second argument then that value will be considered..
// Default arguments should always be written at last.
// Example of this function getting called is in main function..
// I don't know why but default argument functions directly need to defined above!!
int add(int a, int b = 5){
    return a + b;
}




int main(int argc, char const *argv[])
{
    int num1 = 4, num2 = 5;
    // cout << "Enter the two numbers.";
    // cin >> num1 >> num2;
    cout << "The product is: " << product(num1, num2) << endl;
    cout << "The product is: " << product(num1, num2) << endl;
    cout << "The product is: " << product(num1, num2) << endl;
    cout << "The product is: " << product(num1, num2) << endl;
    cout << "The product is: " << product(num1, num2) << endl;
    cout << "The product is: " << product(num1, num2) << endl;
    cout << "The product is: " << product(num1, num2) << endl;


    int z = 10;
    cout << "Magic: " << staticvar(z) << endl;            //21
    cout << "Magic: " << staticvar(z) << endl;            //22  
    cout << "Magic: " << staticvar(z) << endl;            //23
    cout << "Magic: " << staticvar(z) << endl;            //24
    cout << "Magic: " << staticvar(z) << endl;            //25
    cout << "Magic: " << staticvar(z) << endl;            //26
    cout << "Magic: " << staticvar(z) << endl;            //27
    cout << "Magic: " << staticvar(z) << endl;            //28


    int x = 10;
    cout << "Without 2nd argument: " << add(x) << endl;  //15
    cout << "With: " << add(x, 10) << endl;  // 20

    return 0;
}



// Inline functions are used when the function is  very small here when we define inline function the function directly get replaces in main code which saves the actual and formal parameters replacement.
// inline function is used when the code in function is simple of  1-2 lines..
// Inline function is not used in recursion, loops, switch, static variable, go-to...
inline int product(int a, int b){
    return a*b;
}




// static variable by default have tha value 0, it's value is retained also if we go out of the function, it's initialization gets runs only once i.e in first function call and then initialization code is ignored..
int staticvar(int a){
    static int b = 10;  //Now it's value can't be reiniatialize.
    b++;
    return a+b;
}