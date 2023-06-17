#include <iostream>
using namespace std;


int a = 90;  //GLOBAL VARIABLE
int main(int argc, char const *argv[])
{
    int a = 20;
    cout << a << endl; // Will return the value of local variable.
    cout << ::a << endl;  // Will returnn the value of global variable.





    float b = 3.14f;   //Here i have to write f or F after the value otherwise cpp consider the value as double by default.
    // Here is a code to proove it.
    // This is important when we have to do operator overloading.
    cout << sizeof(3.14) << endl;  // Gives 8 for double
    cout << sizeof(3.14f) << endl;  // Gives 4 for double
    cout << sizeof(3.14l) << endl;  // Gives 12 for long double




    // EXTRA FEATURES IN C++
    // *********REFERENCE VARIABLE*************
    int z = 40;
    int & y = z; //Here y is another name of z. i.e y is an reference a=variable to z....
    z = 50;  // Both y and z value will get changed.
    cout << z << endl << y << endl;



    //************TYPECASTING*************
    float fl = 45.836;
    cout << int(fl) << endl;
    cout << float(6) << endl;

    return 0;
}
