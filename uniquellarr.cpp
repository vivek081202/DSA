#include <iostream>
using namespace std;

int uniquearr(int arr[], int n) {
    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        unique = unique ^ arr[i];
    }
    return unique;
}

int main(int argc, char const *argv[])
{
    int array[5] = {2,2,3,4,4};
    cout<<uniquearr(array, 5);
    return 0;
}
