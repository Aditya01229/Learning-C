#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, bin = 0;
    cout << " Input:";
    cin >> a;
    cout << endl;
    while(a > 0){
        int count = 0, minus = 1, add = 1;
        for(int i = a; i > 1; i /= 2){
            count++;
            minus *= 2;
            add *= 10;
            // cout << count;
        }
        a -= (minus);
        bin += add;
    }
    cout << bin;
    return 0;
}
