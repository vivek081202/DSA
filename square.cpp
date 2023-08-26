#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number,sqrt = 1;
    cin>>number;

    for(int i = 1; i <= 2; i++){
        sqrt *= number;
    }

    cout<<"Square of "<<number<<" is "<<sqrt;
    return 0;
}
