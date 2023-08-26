#include <iostream>
using namespace std;

void even_odd(int n) {
    if(n & 1)
        cout<<"Its an odd Number";
    else
        cout<<"Its an even number";   
}

int main(int argc, char const *argv[]) {
    even_odd(6);
    return 0;
}
