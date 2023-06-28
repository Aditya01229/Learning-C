// Static Variable
// To keep count on different objects together. All object share same static varible... i.e for all object only one common static variable is alloted hence only one memory for that static variable is shared by all objects....
#include <iostream>
using namespace std;

class Employee
{
private:
    static int count;     // Static variable is a class property. It is not an object property...
    int id;

public:
    void Getdata(void)
    {
        cout << "Enter id: " << endl;
        cin >> id;
        count++;
    }
    void Display(void)
    {
        cout << "Id of the employee is " << id << endl;
    }

    // A static function to store static varible and use it. So we will not require an object to display class property. We can access the static variable and display it without object..
    static void Total(void){
        // cout << id; // Static functions do not have access to non static variables...
        cout << "Number of Id's created are " << count << endl;
    } 
};

int Employee ::count = 0;

int main()
{
    Employee aditya, akshara, ajay;


    aditya.Getdata();
    aditya.Display();
    Employee :: Total();  // Calling static function without the need of object..


    akshara.Getdata();
    akshara.Display();
    Employee :: Total();  // Calling static function without the need of object..


    ajay.Getdata();
    ajay.Display();
    Employee :: Total();  // Calling static function without the need of object..


    return 0;
}