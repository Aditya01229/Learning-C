#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 0, b = 1, upto;
    cout<<"Enter the number of terms of fibonacci series:";
    cin>>upto;
    if (upto==1)
    {
        cout<<a;
    }
    else if (upto==2)
    {
        cout<<a<<" "<<b;
    }
    else{
        cout<<a<<" "<<b<<" ";
    for (int i = 0; i < (upto-2); i++)
    {
        int temp = a+b;
        a = b;
        b = temp;
        cout<<b<<" ";
    }
    }
    return 0;
}
