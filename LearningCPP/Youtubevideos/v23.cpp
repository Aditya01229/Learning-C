#include <iostream>
using namespace std;


// This is a simple program of using array in class.
class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){counter = 0;}
        void getprice(void);
        void display(void);
};
int main()
{
    Shop kirana;
    kirana.initCounter();
    kirana.getprice();
    kirana.getprice();
    kirana.getprice();
    kirana.getprice();
    kirana.getprice();
    kirana.display();
    return 0;
}


void Shop :: getprice(void){
    cout << "Enter the Id and price" << endl;
    cin >> itemId[counter] >> itemPrice[counter];
    counter++;
}

void Shop :: display(void){
    for (int i = 0; i < counter; i++)
    {
        cout << (i+1) << ". Id=" << itemId[i] << "\t\tRs." << itemPrice[i] << endl;
    }
    
}
