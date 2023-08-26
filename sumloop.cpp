#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0,i, num;

    cout<<"Enter a number: ";
    cin>>num;

    for(i = 1; i <= num; i++){
        sum += i;
    }
    cout<<sum;
    return 0;
}
