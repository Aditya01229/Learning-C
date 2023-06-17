#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout << "Input:";
    cin >> a;
    cout << endl;
    for (int i = a; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
