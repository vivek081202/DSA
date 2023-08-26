#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 1,n;
    cin>>n;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout<<n-j+1<<"  ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
