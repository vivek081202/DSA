#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Continue is used to skip iterations
    int n;
    cout<<endl<<"Enter a number: ";
    cin>>n;

    cout<<"Even Numbers: "<<endl;
    for (int i = 1; i <= n; i++)
    {
        // Even Numbers upto n using continue
        if(i % 2 == 0){
            cout<<i<<" ";
            continue;
            
        }
    }

    cout<<endl<<"Odd Numbers: "<<endl;
     for (int i = 1; i <= n; i++)
    {
        // Odd Numbers upto n using continue
        if(i % 2 != 0){
            cout<<i<<" ";
            continue;
            
        }
    }
    
    return 0;
}
