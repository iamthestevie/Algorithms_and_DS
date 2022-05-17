#include <iostream>
using namespace std;

// Defining a Structure
struct Rectangle
{
    int length;
    int height;
};

int main()
{
    // Declaring a structure
    struct Rectangle r1;
    // Initializing a structure
    r1.length = 10;
    r1.height = 5;

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
}