#include <iostream>
using namespace std;

void swaparr(int arr[], int n) {
    int start = 0, end = 1, i = 1;
    while (i < n)
    {
        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
        i++;
    }
    
    cout<<"Reversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main() {
 
  int array[6] = {12,34,5,6,3,1};
  int array2[5] = {12,34,5,6,3};
  swaparr(array, 6);
  cout<<endl;
  swaparr(array2,5);
  return 0;
}
