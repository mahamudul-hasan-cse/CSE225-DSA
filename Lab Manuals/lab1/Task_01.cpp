/*
Task 1: Using the new operator, allocate an integer array of user specified size (the user gives the size of the array as
input). Assign values to the array elements by taking user inputs and then print the values. Finally de-allocate the array
using the delete operator.
*/

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of array :" <<endl;
    cin>>size;
    //allocate an int arrays
    int *p = new int[size];

    cout<<"Enter array elements : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>p[i];
    }

    cout<<endl<<"Array Elements : "<<endl;
   
    for (int i = 0; i < size; i++)
    {
        cout<<p[i]<<endl;
    }
    //de-allocate by using delete operator
    delete[] p;

    return 0;
}