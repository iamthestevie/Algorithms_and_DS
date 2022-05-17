#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int height;
};

int main()
{
    // declaration and initialization of an integer
    int a = 10;

    // POINTER DECLARATION AND INITIALIZATION

    // decalaration of a pointer
    int *p;

    // initialization of a pointer
    p = &a;

    // ACCESSING / DE-REFERENCING A POINTER

    cout << "The value of a: " << a << endl;
    cout << "The value of p: " << p << endl;
    cout << "The value p points to: " << *p << endl;
    cout << "The address of a: " << &a << endl;

    // declaration and initialization of an array
    int A[5] = {2, 4, 6, 8, 10};

    int *p_to_array;

    p_to_array = A; 

    // the name of an array refers to the starting address of the array
    // so this syntax is incorrect:
    // p_to_array = &A;
    // however this will work: the address of the first element in the array
    // p_to_array = &A[0];

    // printing all the elements in the array using a pointer
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl; // using the array
    }

    for (int i = 0; i < 5; i++)
    {
        cout << p_to_array[i] << endl; // using the pointer
    }


    // DYNAMIC MEMORY ALLOCATION

    // using heap memory to create an array of 5 integers
    // declaration of pointer which lives in stack memory.
    int *p_to_heap; 

    // Initialization. p_to_heap points to heap memory.
    // p_to_heap = (int *)malloc(5 * sizeof(int));
    // same thing in c++
    p_to_heap =  new int[5]; // dynamic memory allocation

    p_to_heap[0] = 1;
    p_to_heap[1] = 11;
    p_to_heap[2] = 21;
    p_to_heap[3] = 31;
    p_to_heap[4] = 41;

    // printing the values
    for (int i = 0; i < 5; i++)
    {
        cout << p_to_heap[i] << endl;
    }

    // DELETING / DE-ALLOCATING DYNAMIC (HEAP) MEMORY

    // c
    // free(p_to_heap);
    // c++
    delete [ ] p_to_heap;

    // CHECKING THE SIZE OF A POINTER

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    // turns out that the size of a pointer is 8 bytes no matter the data type.
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    return 0;
}