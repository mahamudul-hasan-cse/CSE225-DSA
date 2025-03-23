#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main()
{
    dynarr arr(3);
    arr.allocate(5);

    int input;
    cout << "Enter 5 elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        arr.setValue(i, input);
    }

    cout << "Array Elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr.getValue(i) << endl;
    }

    arr.~dynarr();

    cout << "Array Elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr.getValue(i) << endl;
    }

    return 0;
}