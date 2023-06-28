#include <iostream>
using namespace std;
    // Data hiding was not possible in structures. We can't put functions in structures. 
    // Security is not a concern and we don't want to include functions then we should use structures...


// Defining a class
class employee{
    // access modifier
    // data members defined in private can only be accessed within class only..
    private:
        int a, b, c;
    // Data  members defined in public can be accessed from anywhere in program...
    public:
        int e, d;

        int Getdata(int x, int y, int z){
            a = x;
            b = y;
            c = z;
        }
        int Printdata(){
            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
        }
    // protected same as private but they can be accessed by their subclasses ... That is inherited classes.. 
    // protected:
};
int main()
{
    employee aditya;
    // aditya.a = 20   --- Throws an error as a is private...
    aditya.Getdata(10, 20, 30);
    aditya.d = 40;
    aditya.e = 50;
    aditya.Printdata();

    return 0;
}
