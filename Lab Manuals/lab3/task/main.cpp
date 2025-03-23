#include "complex.cpp"
#include <iostream>
using namespace std;

int main()
{
    complex c1(3, 9);
    complex c2(2, 8);

    c1.Print();
    c2.Print();

    complex sum = c1 + c2;
    sum.Print();

    complex mul = c1 * c2;
    mul.Print();

    bool isEqual = c1 != c2;
    if (isEqual)
        cout << "Complex number are Not Equals" << endl;
    else
        cout << "Complex number are Equals" << endl;
}