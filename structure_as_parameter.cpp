#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


// function declaration
void pass_by_value(struct Rectangle);
void pass_by_address(struct Rectangle *);
struct Rectangle *return_pointer_to_rectangle();


int main()
{
    struct Rectangle r = {10, 5};

    // calling this function creates a copy of the structure passed
    cout << "Calling pass_by_value()..." << endl;
    pass_by_value(r);

    cout << "Printing r.length and r.breadth from main()..." << endl;
    printf("Length %d\nBreadth %d\n", r.length, r.breadth);

    cout << "Calling pass_by_address()..." << endl;
    pass_by_address(&r);

    cout << "Printing r.length and r.breadth from main() again... are the values changed?" << endl;
    printf("Length %d\nBreadth %d\n", r.length, r.breadth);

    cout << "Calling return_pointer_to_rectangle()..." << endl;
    struct Rectangle *ptr_to_rect = return_pointer_to_rectangle();

    cout << "Printing the length and breadth of the pointer to rectangle returned by return_pointer_to_rectangle()..." << endl;
    cout << "Length: " << ptr_to_rect->length << endl;
    cout << "Breadth: " << ptr_to_rect->breadth << endl;

    return 0;
}

// function definition
void pass_by_value(struct Rectangle r)
{
    // because this uses pass-by-value any changes made to the struct
    // will not affect the original in the main() stack frame.
    cout << "updating the pass_by_value() copy of r.length to 200..." << endl;
    r.length = 200;

    cout << "Printing r.length and r.breadth from pass_by_value..." << endl;
    cout << "Length " << r.length << endl;
    cout << "Breadth " << r.breadth << endl;
}

void pass_by_address(struct Rectangle *r)
{
    cout << "Updating the pass_by_address() pointer to r to 300..." << endl;
    r->length = 300;

    cout << "Printing r.length and r.breadth from pass_by_address..." << endl;
    cout << "Length " << r->length << endl;
    cout << "Breadth " << r->breadth << endl;
}

// function that creates a rectangle in heap memory
// and returns its address as a pointer.
struct Rectangle *return_pointer_to_rectangle()
{
    struct Rectangle *pointer_to_rectangle;
    // create a new rectangle in heap memory
    // C++ syntax:
    pointer_to_rectangle = new Rectangle;
    // C syntax:
    // pointer_to_rectangle = (struct Rectangle *)malloc(sizeof(struct Rectangle))

    pointer_to_rectangle->length = 15;
    pointer_to_rectangle->breadth = 7;

    return pointer_to_rectangle;
}


