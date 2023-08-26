#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k){
    int start = 0, mid, end = n - 1;
    mid = start + (end - start) / 2;
        while(start <= end){
        if(arr[mid] == k){
        return mid;
        }
        
        if(k > arr[mid]){
            start = mid + 1;
        } 
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
}

return -1;
}

int main(int argc, char const *argv[])
{
    int evenarr[6] = {2,4,5,6,7,8};
    int oddarr[5] = {2,3,44,51,90};
    
    cout<<binarySearch(evenarr,6,7)<<endl;
    cout<<binarySearch(oddarr,5,2);
    
    return 0;
}
