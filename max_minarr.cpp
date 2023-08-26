#include <iostream>
using namespace std;

int maxarray_element(int arr[], int n){
    int maxelem = arr[0];
    for (int i = 0; i < n; i++)
    {
        // if(arr[i] > max){
        //     max = arr[i];
        // }
        maxelem = max(maxelem, arr[i]);
    }
    return maxelem;
}

int minarray_element(int arr[], int n){
    int minelem = arr[0];
    for (int i = 0; i < n; i++)
    {
        // if(arr[i] < min){
        //     min = arr[i];
        // }
        minelem = min(minelem, arr[i]);
    }
    return minelem;
}

int main(int argc, char const *argv[])
{
    int number[5]  = {32, 54, 90, 67, 0};
    cout<<"Max Element: "<<maxarray_element(number, 5)<<endl;
    cout<<"Min Element: "<<minarray_element(number, 5);
    return 0;
}
