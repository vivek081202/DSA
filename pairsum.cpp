#include <iostream>
using namespace std;

void pairsum(int arr[], int n,int S){
    for (int i = 0; i < n; i++)
{
        for (int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == S){
            cout<<arr[i]<<" "<<arr[j]<<endl;
}
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[4] = {1,2,3,4};

    pairsum(arr,4,5);
    return 0;
}
