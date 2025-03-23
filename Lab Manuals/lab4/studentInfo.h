#include <iostream>
using namespace std;

class studentInfo
{
private:
    int id;
    string name;
    double cgpa;

public:
    studentInfo();
    studentInfo(int);
    studentInfo(int, string, double); // overloaded constructor
    bool operator==(studentInfo s);   // operator overloading
    bool operator!=(studentInfo s);
    friend ostream &operator<<(ostream &, studentInfo &); // just like toString method in java
};