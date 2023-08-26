#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num = 000000000011110100, count_1 = 0;
    while (num != 0)
    {
        if(num & 1 == 1){
            count_1++;
        }
        num = num >> 1;
    }
    cout<<"No of set bits are: "<<count_1;
    
    return 0;
}
