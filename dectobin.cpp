#include <iostream>
using namespace std;

int main() {
  int decimal, remainder, i = 1, binary = 0;

  cout << "Enter a decimal number: ";
  cin >> decimal;
  int temp = decimal;

  while (decimal > 0) {
    remainder = decimal % 2;
    binary += remainder * i;
    i *= 10;
    decimal /= 2; // we can use his as well (right shift operation) n >> 1
  }
  cout << "The binary equivalent of " << temp << " is " << binary << endl;
  return 0;
}
