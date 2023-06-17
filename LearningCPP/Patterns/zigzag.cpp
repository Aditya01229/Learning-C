#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout << "Input:";
    cin >> a;
    cout << endl;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if ((i + j) % 4 == 0)
                cout << "* ";
            else if (i == 2 && (j % 4) == 0)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
