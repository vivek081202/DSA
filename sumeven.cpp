#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int even = 2, i = 0, sum =  0,n;
    cin>>n;

    while(i < n){
        sum = sum + even;
        even = even + 2;
        i++;
    }

    cout<<sum;
    return 0;
}
