#include <iostream>
using namespace std;

int AP(int n){
    int ap = (3 * n) + 7;
    return ap;
}

int main(int argc, char const *argv[])
{
    int apvalue = AP(3);
    cout<<apvalue;
    return 0;
}
