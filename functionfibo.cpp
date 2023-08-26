#include <iostream>
using namespace std;

int fibonacci(int n){
    int a1 = 0, a2 = 1, nextnum = 0;

    for (int i = 1; i <= (n - 2); i++)
    {
        nextnum = a1 + a2;
        a1 = a2;
        a2 = nextnum; 
    }
}

int main(int argc, char const *argv[])
{
    cout<<"nth term of fibonacci series: "<<fibonacci(5);
    return 0;
}
