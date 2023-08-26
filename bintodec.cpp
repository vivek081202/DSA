#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int decimal = 0, remainder, i = 0, binary;

  cout << "Enter a binary number: ";
  cin >> binary;

  int temp = binary;

  while (binary > 0) {
    remainder = binary % 10;
    decimal = (remainder * pow(2,i)) + decimal;
    binary = binary / 10; // we can use his as well (right shift operation) n >> 1
    i++;
  }

  cout << "The decimal equivalent of " << temp << " is " << decimal << endl;

  return 0;
}
