#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int array[] = {1,3,4,5,6,4,3,23,56};
    int size_arr = sizeof(array) / sizeof(int);
    cout<<size_arr;
    return 0;
}
