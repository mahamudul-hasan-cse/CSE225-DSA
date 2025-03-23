class complex
{
private:
    double Real, Imaginary;

public:
    complex();
    complex(double, double);
    complex operator+(complex);
    complex operator*(complex);
    bool operator!=(complex);
    void Print();
};