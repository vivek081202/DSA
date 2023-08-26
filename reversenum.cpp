#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

  int reversedNumber = 0;
  while (num > 0) {
        int lastDigit = num % 10;
        reversedNumber = (reversedNumber * 10) + lastDigit;
        num /= 10;
  }

  cout<<reversedNumber;
    return 0;
}