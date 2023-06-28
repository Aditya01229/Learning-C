#include <iostream>
using namespace std;



void swap(int a, int b);
void swappointers( int* a, int* b);
void swapreference( int& a, int& b);
int& swapreference2( int& a, int& b);
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
   swapreference2(a1, a2) = 7;  // Getting swapped again. and here reference of a1 which is a is getting return and its value is changed to 7 which indirectly changes the value of a1 to 7...
   cout << "Values of a1 and a2: " << a1 << "  " << a2 << endl;
    return 0;
}


// This function is useless as changes will not be in main function...
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}


// Useful as here values are changed by using points i.e by giving addresses.
void swappointers( int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}



// Upgrade in C++ here we have created two references will directly refer to the actual arguments in the main function and changes made in this references reflect in the actual parameters.
void swapreference( int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}


int& swapreference2( int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
    return a;  //Here I am returning a reference which is the reference of the first parameter.
}