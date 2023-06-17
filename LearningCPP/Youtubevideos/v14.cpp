#include<iostream>
using namespace std;
// Structures....

// Structures are user defined datatypes.
    typedef struct employee{
        int id;
        char favchar;
        int salary;
    } ep;

    // Typedef is used to rename a structure name.

    // After trying some combinations I found that each datatype in a structure occupies the size required by the biggest datatype. i.e. if the structure only have 3 different char datatype than the size required by that structure will be 3 bytes (1 byte each). 
    // But if it has any one integer for example 1 integer and 2 char then the structure will occupy 12bytes (as integer with highest 4 bytes so all 3 will aquire 4 bytes each = 4x 3 = 12 bytes)




    // union is same as structure but here we are allowed to use any one of the datatypes we define in this so maximum of 1 datatype size is given to union which saves size in memory.
    union first{
        int rollno;
        char name;
        int prn;
    };
int main(int argc, char const *argv[])
{
    employee aditya;
    // aditya.id = 1;
    aditya.favchar = 'a';
    aditya.salary = 50000;
    cout << aditya.salary << endl;
    cout << sizeof(aditya) << endl;


    // Making structure array...
    // employee arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> arr[i].id >> arr[i].favchar;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i].id << "\t\t" << arr[i].favchar << endl;
    // }
    

    // employee* p = arr;
    // cout << "Fav char of Employee 3 is: " << (p+2)->favchar << endl;




    first adi;
    adi.rollno = 1437;
    adi.prn = 22210607;
    cout << adi.rollno << "\t\t" << adi.prn << endl;


    // Here adi.rollno will throw a garbage value or the same value as stored later in prn as in union only value in one datatype can be stored and the most recent one is stored... So rollno will throw a garbage value and prn will be given right...




    // ENUM --> used to assign an integer value to a string.

    enum name{Aditya, Akshara, Ajay};
    name a = Aditya;
    cout << Aditya << Akshara << Ajay << a;
    // here Aditya == 0, Akshara == 1, Ajay ==2
    
    return 0;
}
