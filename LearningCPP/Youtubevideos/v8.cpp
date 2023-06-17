#include <iostream>
#include <iomanip>   //Header file to use the setw function.
using namespace std;
int main(){
    int a, b;
    a = 4484;
    b=56;
    // Manipulator
    cout << "With setw:" << setw(4) << a << endl;
    cout << "With setw:" << setw(4) << b << endl;
    cout << "With negative setw:" << setw(-8) << b;
    cout << setw(8) << a << endl;
    cout << "Without:" << a << endl;
    cout << "Without:" << b << endl;

    return 0;
}