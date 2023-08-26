#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

void ncr_calc(int n, int r){
    int upper = factorial(n);
    int lower = factorial(r) * factorial(n-r);

    int ncr = upper / lower;
    cout<<ncr;
}

int main(int argc, char const *argv[])
{
    ncr_calc(8, 5);
    return 0;
}
