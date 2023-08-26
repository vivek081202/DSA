#include <iostream>
using namespace std;

int main(){
    
    int num1, num2, result;
    char op;
    cout<<"Enter Number 1: ";
    cin>>num1;

    cout<<"Enter Number 2: ";
    cin>>num2;

    cout<<"Enter Operand: ";
    cin>>op;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;
    
    case '*':
        result = num1 * num2;
        break;
    
    case '/':
        result = num1 / num2;
        break;

    case '%':
        result = num1 % num2;
        break;

    default: cout<<"Wrong Operator Entered!!!";
        break;
    }

    cout<<"Results: "<<result;

}