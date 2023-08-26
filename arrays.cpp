#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int numbers[5];

    // cout<<"Enter no. of elements to store: ";
    // cin>>n;

    // cout<<endl;

    // cout<<"Enter elements to store: ";
    // for (int i = 0; i < n; i++)
    //     cin>>numbers[i];

    // cout<<endl;

    // cout<<"Elements stored in array: ";
    // for (int i = 0; i < n; i++)
    //     cout<<numbers[i]<<" ";
   
    string fruits[5] = {"Banana", "Apple", "Watermelon", "Chikoo"};
    cout<<"Fruits: ";
    for (int i = 0; i < 5; i++)
        cout<<fruits[i]<<" ";

    return 0;
}