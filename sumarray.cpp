#include <iostream>
using namespace std;

int sumarray(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main(int argc, char const *argv[])
{
    int n,  numbers[20];

    cout<<"Enter Number of elements: ";
    cin>>n;

    cout<<"Enter elements in an array: ";
    for (int i = 0; i < n; i++)  
        cin>>numbers[i];   

    cout<<"Sum of numbers array is: "<<sumarray(numbers,5);
    return 0;
}