#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int array[20];
    string fruits[5];
    fill_n(array,20,-24);

    /**
     * fill_n() is used to fill all elements with a desired value.
     * fill_n(  array_name  , array_size , Value_to_be_filled );
     *          Parameter1    Parameter2        Parameter3
     */

    for (int i = 0; i < 5; i++)
    {
        fruits[i] = "guava";
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<fruits[i]<<endl;
    }

    for (int i = 0; i < 20; i++)
    {
        cout<<array[i]<<endl;
    }
    
    return 0;
}
