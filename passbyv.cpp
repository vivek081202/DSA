#include <iostream>
using namespace std;

int update(int n){
    n -= 5;
    return n;
}

int main(int argc, char const *argv[])
{
    int n = 15;
    update(n);
    cout<<n;
    return 0;
}
