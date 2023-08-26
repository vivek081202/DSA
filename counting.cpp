#include <iostream>
using namespace std;

void counting(int n){
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
    }
    
}

int main(int argc, char const *argv[])
{
    counting(100);
    return 0;
}
