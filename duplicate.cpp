#include <iostream>
using namespace std;

int duplicate(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i+1]){
            return arr[i];
        }
    }
}

int main(int argc, char const *argv[])
{
    int array[5] = {1,2,3,2,4};
    cout<<duplicate(array, 5);
    return 0;
}
