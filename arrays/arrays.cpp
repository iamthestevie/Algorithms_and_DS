//#include <stdio.h> // used for c
#include <iostream>
using namespace std;

int main()
{
    // CREATING ARRAYS
    int a[5];                   // array declaration. Values in the array not initialized.
    int b[5] = {2,4,6,8,10};    // array declaration and initialization
    // int b[] = {2,4,6,8,10}   // this also works (omit size)
    int c[10] = {};             // all values initialized to 0.
    // creating an array based on size specified by the user
    int n;
    cin >> n;
    int d[n];
    cout << "Enter " << n <<" values:" << endl;
    int i;
    int value;
    for (i = 0; i < n; i++)
    {
        cin >> value;
        d[i] = value;
    }

    // CHECKING SIZE OF
    // checking the size of (in bytes) our array
    cout << "Printing sizeof(a)." << endl;
    cout << sizeof(a) << endl;
    // Output:
    // 20 bytes meanleaing that an integer is 4 bytes.
    
    // ACCESSING THE CONTENTS OF ARRAYS
    // for loops
    cout << "Printing contents of b[]." << endl;
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", b[i]);
    }

    cout << "Printing contents of a[]." << endl;
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Printing contents of c[]." << endl;
    for (i = 0; i < 10; i++)
    {
        cout << c[i] << endl;
    }

    // foreach (c++)
    cout << "Printing the contents of b[] using a foreach loop." << endl;
    for (int x : b)
    {
        cout << x << endl;
    }
    
    return 0;
}