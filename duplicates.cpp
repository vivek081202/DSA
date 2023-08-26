#include <iostream>
using namespace std;

int duplicate(int arr[], int n){
    int dup = 0;
    for (int i = 0; i < n; i++)
    {
        dup = dup ^ arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        dup = dup ^ i;
    }
    
    return dup;
}

int main(int argc, char const *argv[])
{
    int array[5] = {1,2,3,4,3};
    cout<<duplicate(array,5);
    return 0;
}
