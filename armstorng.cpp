#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int number,r,sum=0;
    cout<<"Enter an Armstrong Number: ";
    cin>>number;
    int temp = number;
    while(number > 0){
        r = number % 10;
        sum = sum + pow(r, 3);
        number = number / 10;
    }

    if(temp == sum) {
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an arm strong number";
    }
    return 0;
}