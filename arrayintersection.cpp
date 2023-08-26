#include <iostream>
using namespace std;

void arrayintersection(int arr1[],int arr2[], int na1, int na2){
    for (int i = 0; i < na1; i++)
    {
        for (int j = 0; j < na2; j++)
        {
            if(arr1[i] == arr2[j]){
               cout<<arr1[i]<<" ";
               arr2[j] = -82328;
               break;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr1[5] = {1,2,4,10};
    int arr2[5] = {2,10,4,13};

    arrayintersection(arr1,arr2,5,5);

    
    return 0;
}
