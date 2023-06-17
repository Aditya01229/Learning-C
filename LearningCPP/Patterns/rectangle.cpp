#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int l, b;
    cout<<"Input:";
    cin>>l>>b;
    cout<<endl;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}
