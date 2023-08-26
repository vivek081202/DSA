#include <iostream>
using namespace std;

string AP_GP(int arr[], int n){
    if(n < 2)
        return "-1";
    
    int common_difference = arr[1] - arr[0];
    int common_ratio = arr[1] / arr[0];

    for (int i = 2; i < n; i++)
        if(arr[i] - arr[i-1] != common_difference){
            common_difference = 0;
            break;
        }

    for (int i = 2; i < n; i++)
        if(arr[i] / arr[i-1] != common_ratio){
            common_ratio= 0;
            break;
        }
        
    if(common_difference != 0){
        return "Arithmetic";
    }
    else if(common_ratio != 0){
        return "Geometric";
    }
    else
        return "-1";
}

int main(int argc, char const *argv[])
{
    int arra[5] = {1,2,3,4,5};
    int arrg[5] = {2, 6, 18, 54, 162};
    int arrn[5] = {3, 5, 7, 9, 11};
    int arrn1[1] = {3};

    cout<<AP_GP(arra,5)<<endl;
    cout<<AP_GP(arrg,5)<<endl;
    cout<<AP_GP(arrn,5)<<endl;
    cout<<AP_GP(arrn1,1);
    return 0;
    return 0;
}
