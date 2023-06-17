#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, deci = 0;
    cout << " Input:";
    cin >> a;
    cout << endl;
    for (int i = 1; a > 0; a /= 10, i *= 2)
    {
        deci += (i*(a % 10));
    }
    cout << deci;
    
    return 0;
}
