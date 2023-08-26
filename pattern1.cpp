#include <iostream>
using namespace std;

int main(){

    int i = 1,n;
    cin>>n;
    while(i <= n){
        int j = n;
        while(j != 0){
            cout<<j<<"  ";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}