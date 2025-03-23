#include "complex.h"
#include <iostream>
using namespace std;

complex::complex()
{
    Real = 0;
    Imaginary = 0;
}

complex::complex(double real, double imaginary)
{
    Real = real;
    Imaginary = imaginary;
}

complex complex::operator+(complex obj)
{
    complex sum;
    sum.Real = this->Real + obj.Real;
    sum.Imaginary = this->Imaginary + obj.Imaginary;
    return sum;
}

complex complex::operator*(complex obj)
{
    complex multiplication;
    multiplication.Real = (this->Real * obj.Real) - (this->Imaginary * obj.Imaginary);
    multiplication.Imaginary = (this->Real * obj.Imaginary) - (this->Imaginary * obj.Real);
    return multiplication;
}

bool complex::operator!=(complex obj)
{
    bool res = false;
    if (this->Real == obj.Real && this->Imaginary == obj.Imaginary)
        res = false;
    else
        res = true;

    return res;
}

void complex::Print()
{
    cout << this->Real << "+" << this->Imaginary << "i" << endl;
}