// Experiments with pointer

#include <iostream>
using namespace std;
int main()
{
    float a = 3.14f;
    float* p = &a;
    cout << "Address: " << p << "\nValue: " << *p << endl;
    cout << "Size: " << sizeof(p) << endl;


    // Size of pointer depends on compiler to compiler and PC. In 32 bit compiler size of pointer is 4bytes...
    // The pointer for char, int, float, double, long int, long double requires same size. In this compiler 4 bytes...



    float** p1 = &p;    // Pointer to a pointer.
    cout << "Address of p: " << p1 << endl;
    cout << "Address of a equal to value at p: " << *p1 << endl;
    cout << "Value of a: " << *p << endl;
    return 0;
}
