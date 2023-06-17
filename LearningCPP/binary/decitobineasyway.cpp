#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout << " Input:";
    cin >> a;
    cout << endl;
    for( ; a > 0; a /= 2){
        cout << (a % 2);
    }
    return 0;
}
