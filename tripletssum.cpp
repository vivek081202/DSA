#include <iostream>
using namespace std;

void pairsum(int arr[], int n,int S)
{
   for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++)
            {
                if(arr[i] + arr[j] + arr[k] == S)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}

int main(int argc, char const *argv[]) {
    int arr[5] = {1,2,3,4,5};
    pairsum(arr,5,8);
    return 0;
}
