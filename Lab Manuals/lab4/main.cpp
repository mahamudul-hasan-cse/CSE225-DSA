#include <iostream>
#include "unsortedType.cpp"
#include "studentInfo.cpp"
using namespace std;

template <class T>
void Print(unsortedType<T> u)
{
    int length = u.lengthIs();
    T value;
    for (int i = 0; i < length; i++)
    {
        u.getNextItem(value);
        cout << value << " ";
    }
    cout << endl;
}

template <class T>
void Retrieve(unsortedType<T> u, T value)
{
    bool b;
    u.retriveItem(value, b);
    if (b)
    {
        cout << "Item is found" << endl;
        cout << value << endl;
    }

    else
        cout << "Item is not found" << endl;
}

void checkFull(bool b)
{
    if (b)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}

int main()
{
    // 1st part
    unsortedType<int> ut;
    ut.insertItem(5);
    ut.insertItem(7);
    ut.insertItem(6);
    ut.insertItem(9);
    Print(ut);

    cout << ut.lengthIs() << endl;
    ut.insertItem(1);
    Print(ut);

    Retrieve(ut, 4);
    Retrieve(ut, 5);
    Retrieve(ut, 9);
    Retrieve(ut, 10);

    checkFull(ut.isFull());
    ut.deleteItem(5);
    checkFull(ut.isFull());
    ut.deleteItem(1);
    Print(ut);
    ut.deleteItem(6);
    Print(ut);

    cout << endl;

    // 2nd part
    studentInfo s1(15234, "Jon", 2.6),
        s2(13732, "Tyrion", 3.9),
        s3(13569, "Sandor", 1.2),
        s4(15467, "Ramesey", 3.1),
        s5(16285, "Arya", 3.1);

    unsortedType<studentInfo> list;
    list.insertItem(s1);
    list.insertItem(s2);
    list.insertItem(s3);
    list.insertItem(s4);
    list.insertItem(s5);

    Print(list);

    studentInfo temp = 15467;
    list.deleteItem(temp);

    cout << endl;
    Print(list);

    temp = 13569;
    Retrieve(list, temp);

    return 0;
}