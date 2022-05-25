#include <iostream>
using namespace std;

namespace data_variables 
{
    int i = 0;
    int j = 1;
    int k = 2;
}

namespace reference_variables
{
    int i = 0;
    int& j = i; // give 'i' the alias 'j'. Both 'i' and 'j'
                // refer to the same place in memory.
    int k = 1;
}

namespace pointer_variables
{
    int i = 0;
    int* j = &i; // 'j' is a pointer to an int variable pointed at the data in 'i'
}

int main()
{

    data_variables::i = 3;
    data_variables::j = 3;
    cout << "data variables:" << endl;
    cout << "i ==> " << data_variables::i << ". At memory address: " << &data_variables::i << endl;
    cout << "j ==> " << data_variables::j << ". At memory address: " << &data_variables::j << endl;


    reference_variables::i = 3;
    reference_variables::j = 3;
    cout << "reference variables:" << endl;
    cout << "i ==> " << reference_variables::i << ". At memory address: " << &reference_variables::i <<endl;
    cout << "j ==> " << reference_variables::j << ". At memory address: " << &reference_variables::j <<endl;

    pointer_variables::i = 3;
    *pointer_variables::j = 3; // need to dereference to assign a new value.
    cout << "pointer variables:" << endl;
    cout << "i ==> " << pointer_variables::i << ". At memory address: " << &pointer_variables::i <<endl;
    cout << "j ==> " << *pointer_variables::j << ". At memory address: " << pointer_variables::j <<endl;
}