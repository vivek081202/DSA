#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Rectangle star print
    int i = 1,n;
    cin>>n;
    while(i <= n){

        int j = 1;
        while(j <= n){
            cout<<"*  ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
