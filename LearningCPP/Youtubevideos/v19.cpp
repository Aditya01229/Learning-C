#include <iostream>
using namespace std;



// Function Overloading - Using same name for functions and use of proper function for doing a specific process according to the arguments passed...

// HERE FOR EXAMPLE I'M TAKING VOLUME FUNCTION...

int volume(int);
float volume(int, int);
int volume(int, int, int);

int main()
{
    cout << "Volume of cube: " << volume(5) << endl;   
    cout << "Volume of cylinder: " << volume(5, 4) << endl;   
    cout << "Volume of cuboid: " << volume(5, 4, 3) << endl;   
    return 0;
}

// Volume of square..
int volume(int a){
    return (a*a*a);
}


// Volume of Cylinder..
float volume(int r, int h){
    return(3.14 * r * r * h);
}


// Volume of cuboid..
int volume(int l, int b, int h){
    return (l * b * h);
}
