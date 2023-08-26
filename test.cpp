#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int number = 321,rev=0;

  while(number > 0){
    int digit = number % 10;
    rev = (rev * 10) + digit;
    number = number / 10;
  }

  cout<<rev;
    return 0;
}
