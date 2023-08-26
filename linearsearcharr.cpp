#include <iostream>
using namespace std;

bool linearsearch(int arr[], int n, int k){ 
    for (int i = 0; i < n; i++)
        if(arr[i] == k)
            return true;    
    return false;    
}

int main(int argc, char const *argv[])
{
    int array[6] = {1, 3, 65, 90, -67, 7}, element;

    cout<<"Enter element to be found in array: ";
    cin>>element;

    if(linearsearch(array, 6, element))
        cout<<"Element found";
    else
        cout<<"Element not found";
    return 0;
}
