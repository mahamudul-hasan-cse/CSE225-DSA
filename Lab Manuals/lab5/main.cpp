#include <iostream>
#include "sortedtype.cpp"
#include "timeStamp.cpp"
using namespace std;

template <class T>
void Print(sortedtype<T> u)
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
void PrintT(sortedtype<T> u)
{

    int length = u.lengthIs();
    T value;
    for (int i = 0; i < length; i++)
    {
        u.getNextItem(value);
        cout << value << endl;
    }
    cout << endl;
}

template <class T>
void Retrieve(sortedtype<T> u, T value)
{
    bool b;
    u.retriveItem(value, b);
    if (b)
        cout << "Item is found" << endl;
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
    sortedtype<int> list;

    cout << list.lengthIs() << endl;

    list.insertItem(5);
    list.insertItem(7);
    list.insertItem(4);
    list.insertItem(2);
    list.insertItem(1);

    Print(list);
    Retrieve(list, 6);
    Retrieve(list, 5);

    checkFull(list.isFull());

    list.deleteItem(1);
    Print(list);
    checkFull(list.isFull());
    cout<<endl;

    //2nd part 
    
    sortedtype<timeStamp> time;
    timeStamp t1(15, 34, 23);
    timeStamp t2(13, 13, 02);
    timeStamp t3(43, 45, 12);
    timeStamp t4(25, 36, 17);
    timeStamp t5(52, 02, 20);

    time.insertItem(t1);
    time.insertItem(t2);
    time.insertItem(t3);
    time.insertItem(t4);
    time.insertItem(t5);
    PrintT(time);

    timeStamp temp(25, 36, 17);
    time.deleteItem(temp);

    PrintT(time);

    return 0;
}