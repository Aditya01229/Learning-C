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
        int num = 1;
        for (int j = 1; j <= i; j++, num++)
        {
            cout << num<<" ";
        }
        cout << endl;
    }

    return 0;
}
