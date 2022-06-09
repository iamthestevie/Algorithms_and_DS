#include <iostream>

using namespace std;

template<class T>
class Arithmetic
{

private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T get_a(){return a;}
    T get_b(){return b;}
    T add();
    T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add()
{
    return a + b;
}

template<class T>
T Arithmetic<T>::sub()
{
    return a - b;
}

int main()
{
    Arithmetic<float> ar_f(10.5, 5.5);
    cout << "a = " << ar_f.get_a() << " b = " << ar_f.get_b() << endl;

    return 0;
}