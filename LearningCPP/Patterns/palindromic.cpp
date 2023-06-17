#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout<< "Input:";
    cin>>a;
    cout<<endl;
    for (int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= (a-i); j++){
            cout << "  ";
        }
        for(int j = i; j >=1 ; j--)
        {
            cout << j << " ";
        }
        for(int j = 2; j <=i ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
