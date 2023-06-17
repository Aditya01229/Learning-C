#include<iostream>
using namespace std;

int sum(int a, int b); // This is call function prototype as we are just declaring the function here and defining it later.

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout << "Enter the two numbers." << endl;
    cin>> num1 >> num2;
    // here num1 and num2 are actual parameters..
    cout << "Sum is: " << sum(num1, num2);
    return 0;
}


// Basic function to add 2 numbers.
// As a and b are taking values they are formal parameters..
int sum(int a, int b){
    return a + b;
}