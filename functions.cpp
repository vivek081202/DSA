#include <iostream>
using namespace std;

// User defined function power1
int power1(int a, int b){
    cout<<"Enter a and b: ";
    cin>>a>>b;
    int powerab = 1;
    for (int i = 1; i <= b; i++)
        powerab = powerab * a;

    return powerab;
}

int main(int argc, char const *argv[]) {
    int power = power1(6,8);
    cout<<power;
    return 0;
}
