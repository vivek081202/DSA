#include <iostream>
using namespace std;

int main(){

    int principal, rate, time;
    float SI;

    cout<<"Enter Principal: ";
    cin>>principal;

    cout<<"Enter Rate: ";
    cin>>rate;

    cout<<"Enter Time: ";
    cin>>time;

    SI = (principal * rate * time) / 100;

    cout<<"Simple Interest: "<<SI;

}