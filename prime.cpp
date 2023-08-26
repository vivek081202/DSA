#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, i = 2,count = 0;
    bool isprime = true;
    cin>>num;
    
    while(i < num){
            if(num % i == 0){
                isprime = false;
                break;
            }
            i++;
    }

    if(isprime == true){
        cout<<"Prime no";
    }
    else
        cout<<"Not a prime";
    return 0;
}
