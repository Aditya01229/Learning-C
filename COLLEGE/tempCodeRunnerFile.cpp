#include <iostream>
using namespace std;
int factorial(int ans, int fact){
    if(fact == 1){
        return ans;
    }
    ans *= fact--;
    factorial(ans, fact);
}
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number of which factorial is to be find:";
    cin>>num;
    int ans = factorial(1, num);
    cout<<"The factorial is "<<ans;
    return 0;
}