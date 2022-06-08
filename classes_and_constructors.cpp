#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle {

private:

    // DATA MEMBERS
    int length;
    int breadth;

public:

    // FUNCTION MEMBERS

    // constructor
    Rectangle(int new_length, int new_breadth)
    {
        length = new_length;
        breadth = new_breadth;
    }

    int get_length()
    {
        return length;
    }

    int get_breadth()
    {
        return breadth;
    }

    void set_length(int new_length)
    {
        length = new_length;
    }

    void set_breadth(int new_breadth)
    {
        breadth = new_breadth;
    }

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r(10, 5);
    cout << "Length: " << r.get_length() << endl << "Breadth: " << r.get_breadth() << endl;
    
    int area_of_r = r.area();
    cout << "Area of r: " << area_of_r << endl;
}