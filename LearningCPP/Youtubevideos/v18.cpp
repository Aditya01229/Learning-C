#include <iostream> 
using namespace std;


int factorial(int a);
void fib(int x);
int fibterm(int x);
int main()
{
    int num;
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    cout << "The term at " << num << " Position is: " << fibterm(num) << endl;

    cout << "First " << num << " Terms of Fibonacci series are : ";
    fib(num);


    return 0;
}


// This is an example of recursive function...
int factorial(int a){
    if(a <= 1){
        return 1;
    }
    else{
        return a * factorial(a-1);
    }
}



// Fibonacci series printing using recursion...
void fib(int x){
    if(x == 0){
        exit(1);
    }
    static int a = 0, b = 1;   //This is how we can make use of static variabless....
    cout << a << " ";
    int temp = a;
    a = b;
    b = b + temp;
    fib(--x);
}


// Fibonacci series term using recursion...
int fibterm(int x){
    if(x == 1){
        return 0;
    }
    else if(x == 2){
        return 1;
    }
    else{
        return fibterm(x-2) + fibterm(x-1);
    }
}
