#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(int argc, char const *argv[])
{
    int numbers[5] = {1,2,3,4,5};
    printarray(numbers,5);
    return 0;
}
