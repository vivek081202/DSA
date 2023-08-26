#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num = 49;
    /**
     * if num & 1 then output = 1 then number is odd or if 0 then number is even
     * 
     */
    if(num & 1 == 1){
        cout<<"Odd Number";
    }
    else{
        cout<<"Even Number";
    }
    return 0;
}
