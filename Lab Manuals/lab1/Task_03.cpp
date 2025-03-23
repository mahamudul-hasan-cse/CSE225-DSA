/*
Task 3: Using the new operator, allocate a two dimensional integer array. The number of rows and columns are going
to be provided by the user as input. However, in this task, all of the rows are not the same size (the array is uneven).
The user will specify how many elements the individual rows will have. Assign values to the array elements by taking
user inputs and then print the values. Finally de-allocate the array using the delete operator.
*/
#include<iostream>
using namespace std;
int main()
{   
     int row, col;
    cout << "Enter row : ";
    cin >> row;

    int colArray[row]; // for storing columns
    int **ptr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        cout << "Enter column for row : " << i << ": ";
        cin >> col;
        ptr[i] = new int[col];
        colArray[i] = col;
    }

    cout << "\nEnter array elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colArray[i]; j++)
        {
            cin >> ptr[i][j]; // user input
        }
    }

    cout << "\nArray elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colArray[i]; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] ptr;
    return 0;
}
