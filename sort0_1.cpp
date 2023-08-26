#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int arr[] = {0, 1, 2, 2, 1, 0};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Sort the array in ascending order using the inbuilt sort function.
  sort(arr, arr + n);

  // Print the sorted array.
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
