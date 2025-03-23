/*
Task 2: Using the new operator, allocate a two dimensional character array. Again the number of rows and columns
are going to be provided by the user as input. All of the rows are the same size. Take character strings as input from
the user and then print the strings. Finally de-allocate the array using the delete operator.
*/
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter row : "<<endl;
    cin>>row;
    cout<<"Enter colomn : "<<endl;
    cin>>col;

    string **ptr = NULL;
    ptr = new string *[row];

    for (int i = 0; i < row; i++)
    {
        ptr[i]=new string[col];
    }

    cout <<endl<<"Enter array elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> ptr[i][j]; 
        }
    }

    cout <<endl <<"Array elements: " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] ptr;

    return 0;
}