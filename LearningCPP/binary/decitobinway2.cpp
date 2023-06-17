#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, deci = 0;
    cout << " Input:";
    cin >> a;
    cout << endl;
    int near = 1;
    for (int i = a; i > 1; i /= 2)
    {
        near *= 2;
    }
    
    while(near > 0){
        cout << a <<" " << near << endl;
        if( (a/near)==1){
            deci = (deci*10) + 1;
            a %= near;
        }
        else{
        deci = (deci*10) + 0;
        }
        near /= 2;
    }
    cout << deci;
    return 0;
}
