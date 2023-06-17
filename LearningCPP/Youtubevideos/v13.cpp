#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{


    // An array to take 4 interger inputs and then print it.

    // int arr[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    /*
    arr[i] == *(arr + i)
    arr == &arr[0]
    if *p = arr then the pointer stores the first integer address of that array.
    p + 1 refers to the 2nd integer address..
    *(p+1) refers to the value of 2nd integer of that array.
    We can also make an array of pointers.
    and store that address of pointers array in another pointer to a pointer.

    By doing  p++ the pointer will get updated and store the value of next integer.
    We can build all this logic in c++ arrays as in array the elements are store in continuos memory...
    */


   int arr[] = {10, 20, 30, 40, 50};
   int* p = arr;
   for (int i = 0; i < 5; i++)
   {
    cout << (i + 1) << ". Address: " << (p + i) << "\t\tValue: " << *(p + i) << endl;
   }
   

    
    
    return 0;
}
