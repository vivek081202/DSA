#include <iostream>
using namespace std;

int Tsetbits(int a, int b){
    int r1, r2, count1 = 0, count2 = 0;
    for (int i = 0; a > 0; i++)
    {
        r1 = a % 10;
        if(r1 == 1){
            count1++;
        }
        a = a / 10;
    }

    for (int i = 0; b > 0; i++)
    {
        r2 = b % 10;
        if(r2 == 1){
            count2++;
        }
        b = b / 10;
    }
    
    int tsbits = count1 + count2;
    return tsbits;
}

int main(int argc, char const *argv[])
{
    cout<<"Total bits of and b: "<<Tsetbits(10001, 1110);
    return 0;
}
