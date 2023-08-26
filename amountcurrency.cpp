#include <iostream>
using namespace std;

int main(){
    int amount = 1330, notes, balance;

    cout<<"Enter Notes: ";
    cin>>notes;
    switch (notes)
    {
    case 100: 
        cout<<"100 rupee notes:"<<amount / notes<<endl;
        break;
       
    case 50:
        amount = amount - 1300;
        cout<<"50 rupee notes:"<<amount / notes<<endl;
        break;

    case 20:
        amount = amount - 1300;
        cout<<"20 rupee notes:"<<amount / notes<<endl;
        break;

    case 10:
        amount = amount - 1320;
        cout<<"10 rupee notes:"<<amount / notes<<endl;
        break;

    default:cout<<"Sorry Notes are now no more in economy";
        break;
    }
}