#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main()
{
    // sub task-1
    dynarr object1();
    dynarr object2(5);

    // sub task-2
    int input;
    cout << "Enter 5 elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        object2.setValue(i, input);
    }

    // sub task-3
    cout << "Array Elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << object2.getValue(i) << endl;
    }

    return 0;
}