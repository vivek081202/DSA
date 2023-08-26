#include <iostream>
using namespace std;

int main() {

    char letter;
    int asciis = 'a';
    int asciil = 'A';
    char num = 0;
    cout<<"ASCII table"<<endl;
    for(letter = 'a';letter <= 'z'; letter++){
        cout<<letter<<": "<<asciis<<endl;;
        asciis++;
    }
    cout<<endl;
     for(letter = 'A';letter <= 'Z'; letter++){
        cout<<letter<<": "<<asciil<<endl;;
        asciil++;
    }
    cout<<endl;
     for(char i = 0; i <= 9; i++){
        cout<<i<<": "<<num<<endl;;
        num++;
    }
    return 0;
}