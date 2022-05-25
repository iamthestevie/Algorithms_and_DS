#include <iostream>

using namespace std;

int square (int i) {        // i is a parameter
    return i * i;
}

void increment (int& n) {   // n is a parameter
    ++n;
}

int main() {
    int i = 3;
    int j = square(i);      // i is an argument
    cout << "Value of j: " << j << endl;
    
    increment(j);           // j is an argument
    cout << "Value of j: " << j << endl;
}