#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number,power,powered = 1;
    cin>>number>>power;

    for(int i = 1; i <= power; i++){
         powered *= number;
    }

    cout<<number<<" raise to power"<< power<< " is "<<powered;
    return 0;
}
