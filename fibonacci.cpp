#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a1 = 0, a2 = 1,n;
   
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<a1<<" "<<a2<<" ";
    for (int i = 1; i <=n ; i++)
    {
        int temp = a1 + a2;
        cout<<temp<<" ";
        a1 = a2;
        a2 = temp;
    }
    
    return 0;
}
