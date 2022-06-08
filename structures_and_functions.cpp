#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int length, int breadth)
{
    // function that takes a pointer to rectangle, length, and breadth
    // and initializes the rectangle with the passed values.
    
    r->length = length;         // notice that the rectangle is passed-by-address
    r->breadth = breadth;       // so the '->' operator is used, 
                                //as opposed to the '.' operator (r.lenth).
}


int area(struct Rectangle r)
{
    // function to calculate the area of a rectangle
    // Rectangle is passed-by-value, so the function creates a copy of the Rectangle
    // in its stack frame

    return r.length * r.breadth;    // pass-by-value so the '.' operator can be used.
}

void change_length(struct Rectangle *r, int new_length)
{
    // function that takes the address of a Rectangle
    // and updates its length to 'new_length'

    r->length = new_length;         // pass-by-address so '->' operator is used.
}

int main()
{
    // notice the style of coding here...
    // the main function simply delegates all tasks to functions
    // and does no processing on its own.

    struct Rectangle r;             // create a rectangle
    initialize(&r, 10, 5);          // initialize the rectangle with length and breadth
    int area_of_r = area(r);        // calculate the area of r
    change_length(&r, 20);          // update r's length to 20.
}