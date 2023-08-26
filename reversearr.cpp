#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    cout<<"Reversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main() {
 
  int array[6] = {12,34,5,6,3,1};
  reverse(array, 6);

  return 0;
}
