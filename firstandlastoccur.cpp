#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int key){
    int start = 0;
    int end = n - 1, ans = 0;
    int mid = start + (end - start) / 2;

    while (start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastocc(int arr[], int n, int key){
    int start = 0;
    int end = n - 1, ans = 0;
    int mid = start + (end - start) / 2;

    while (start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int arr[6] = {1,2,3,4,3,5};
    cout<<firstocc(arr,6,3)<<" "<<lastocc(arr,6,3);
    return 0;
}
