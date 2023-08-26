#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number,cube = 1;
    cin>>number;

    for(int i = 1; i <= 3; i++){
        cube *= number;
    }

    cout<<"Square of "<<number<<" is "<<cube;
    return 0;
}
