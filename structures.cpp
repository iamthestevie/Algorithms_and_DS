#include <iostream>
using namespace std;

// Defining a 
// no memory is consumed until you declare a structure.
struct Rectangle
{
    int length;
    int height;
}/* can also declare a struct variable here: r1, r2, r3,... */ ;

// if we declare a variable here it will be global and accessible 
// to all functions in the program.

int main()
{
    // Declaring a structure
    struct Rectangle r1;
    
    // Initializing a structure
    r1.length = 10;
    r1.height = 5;

    // getting the size of a structure
    cout << "Size of r1 in bytes: " << sizeof(r1) << endl;

    // Declaring and initializing a structure
    struct Rectangle r2 = {10, 5};

    cout << "Rectangle r1 has properties:" << endl;
    cout << "length: " << r1.length << endl;
    cout << "height: " << r1.height << endl;

    cout << "Rectangle r2 has properties:" << endl;
    cout << "length: " << r2.length << endl;
    cout << "height: " << r2.height << endl;

    // Calculating the area of a rectangle
    printf("Area of a Rectangle r1 is %d.\n", r1.length * r1.height);

    return 0;
}
