#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    char ch;
    cout<<"Enter a Number: "<<endl;
    cin>>ch;

    if(ch >= 'a' && ch <= 'z'){
        cout<<"This is Lower case";
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout<<"This is Upper Case";
    }
    else if(ch >= '0' && ch <= '9'){
        cout<<"This is Numeric";
    }
    else
    {
        cout<<"Another special symbols";
    }
    

    return 0;
}
