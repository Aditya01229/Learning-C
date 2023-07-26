#include <iostream>
using namespace std;
class func{
    private:
    int *data;
    public:
    func(){
        cout << "Constructor is called" << endl;
    }
    ~func(){
        delete[] data;
        cout << "Destructor is called" << endl;

    }
};
int main()
{
    func obj;
    return 0;
}