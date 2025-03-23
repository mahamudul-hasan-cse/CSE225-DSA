#include "studentInfo.h"

studentInfo::studentInfo()
{
    
}

studentInfo::studentInfo(int id)
{
    this->id = id;
}

studentInfo::studentInfo(int id, string name, double cgpa)
{
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;
}

bool studentInfo::operator==(studentInfo s)
{
    if (this->id == s.id)
        return true;
    else
        return false;
}

bool studentInfo::operator!=(studentInfo s)
{
    if (this->id != s.id)
        return true;
    else
        return false;
}

ostream &operator<<(ostream &os, studentInfo &student)
{
    os << student.id << ", " << student.name << ", " << student.cgpa << endl;
    return os;
}