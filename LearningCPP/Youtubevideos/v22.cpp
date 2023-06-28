/*
C++ was earlier called as C with classes..
Classes are basically structures with access modifiers and functions.
They have methods and properties..

You can declare objects along with class declaration..
class employee{

} aditya, rohan;

private variables can't be acccesed from outside class.
*/
#include <iostream>
#include <string>
using namespace std;

class Binary
{
private:
    string bin;
    void check(void);

public:
    void read(void);
    void print(void);
    void onescompliment(void);
};

int main()
{
    Binary a;
    a.read();
    // a.print();
    a.onescompliment();
    a.print();
}

void Binary ::read(void)
{
    cout << "Enter the Binary Number: " << endl;
    cin >> bin;
}


void Binary :: print(void){
    for (int i = 0; i < bin.length(); i++)
    {
        cout << bin.at(i);
    }
    cout << endl;
    
}

void Binary ::check(void)
{
    int i;
    for (i = 0; i < bin.length(); i++)
    {
        if (bin.at(i) != '0' && bin.at(i) != '1')
        {
            cout << "Invalid Binary Number!" << endl;
            exit(0);
        }
    }
    if(i == bin.length()){
        cout << "Valid Binary Number!" << endl;
    }
}

void Binary ::onescompliment(void)
{
    check();  // Here I'm using nested member function...
    cout << "Proceeding to one's compliment!" << endl;
    for (int i = 0; i < bin.length(); i++)
    {
        if (bin.at(i) == '0')
        {
            bin.at(i) = '1';
        }
        else
        {
            bin.at(i) = '0';
        }
    }
}