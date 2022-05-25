#include <iostream>

using namespace std;

// define our structure
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // declare and initialize our structure
    struct Rectangle r = {10,5};

    // this also works (for C++ compilers but not C)
    // Rectangle r = {10,5};

    // accessing parameters of a structure
    cout << "Length: " << r.length << endl;
    cout << "Breadth: " << r.breadth << endl;

    // creating a pointer to a structure
    Rectangle* p_to_r = &r;

    // accessing members of the structure through the pointer
    cout << "Length via pointer: " << p_to_r->length << endl;
    cout << "Breadth via pointer: " << p_to_r->breadth << endl;

    // using heap memory
    // 1. create a pointer in the stack memory
    Rectangle* p_to_r_in_heap;
    // 2. create our structure in the heap using the malloc function
    // 2.a. malloc takes the size of the object we wish to create
    // 2.b. malloc returns a void pointer so we need to typecast the pointer
    // into the type we want:
    p_to_r_in_heap = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    // same thing in C++ code:
    // p_to_r_in_heap = new Rectangle;

    // accessing the members of our structure in heap
    p_to_r_in_heap->length = 20;
    p_to_r_in_heap->breadth = 10;

    // accessing the members
    cout << "Length via pointer to heap: " << p_to_r_in_heap->length << endl;
    cout << "Breadth via pointer to heap: " << p_to_r_in_heap->breadth << endl;

    // freeing our memory
    // c
    // free(p_to_r_in_heap);
    // c++
    delete p_to_r_in_heap;

    return 0;
}