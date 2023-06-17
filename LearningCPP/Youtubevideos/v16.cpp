#include <iostream>
using namespace std;



int swap(int a, int b);
int swappointers( int* a, int* b);
int swapreference( int& a, int& b);
int main(int argc, char const *argv[])
{
   int a1 = 4, a2 = 8; 
   cout << "Values of a1 and a2: " << a1 << "  " << a2 << endl;
   swap(a1, a2);  //Not getting swaped
   cout << "Values of a1 and a2: " << a1 << "  " << a2 << endl;
   swappointers(&a1, &a2);  // Getting swapped
   cout << "Values of a1 and a2: " << a1 << "  " << a2 << endl;
   swapreference(a1, a2);  // Getting swapped again.
   cout << "Values of a1 and a2: " << a1 << "  " << a2 << endl;
    return 0;
}


// This function is useless as changes will not be in main function...
int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}


// Useful as here values are changed by using points i.e by giving addresses.
int swappointers( int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}



// Upgrade in C++ here we have created two references will directly refer to the actual arguments in the main function and changes made in this references reflect in the actual parameters.
int swapreference( int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}