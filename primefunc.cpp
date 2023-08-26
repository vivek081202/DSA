#include <iostream>
using namespace std;

bool isprime(int n){
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;    
}

int main(int argc, char const *argv[])
{
    if(isprime(111))
        cout<<"Prime Number";
    else    
        cout<<"Not a Prime Number";
    return 0;
}
