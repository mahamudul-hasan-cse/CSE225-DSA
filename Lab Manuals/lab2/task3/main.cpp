#include "dynarr.cpp"
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter row and column: ";
    cin >> row >> col;

    dynarr arr;
    arr.allocate(row, col);

    int input;
    cout << "Enter elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> input;
            arr.setValue(i, j, input);
        }
    }

    cout << "Array elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr.getValue(i, j) << " ";
        }
        cout << endl;
    }

    arr.~dynarr();

    return 0;
}