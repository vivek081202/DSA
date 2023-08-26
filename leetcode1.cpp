#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // sample number: 234
    int product = 1, sum = 0, number,digit;
    cout<<"Enter a number: ";
    cin>>number;
    
    for (int i = 0; number > 0; i++)
    {
        digit = number % 10;
        product *= digit;
        sum  += digit;
        number = number / 10;
    }

    cout<<product-sum;
    
    return 0;
}
