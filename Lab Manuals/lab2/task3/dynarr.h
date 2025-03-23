/*
Task 3: Modify the header file and the source files again, so that it works for two dimensional array where all the rows are the same size. 
The user will specify the number of rows and columns as well as the content of the array, which you will take as input from user in the main function.
*/

class dynarr
{
private:
    int **data; // point a pointer for creating 2 dimention dynamic memory allocation
    int row, col;

public:
    dynarr();
    dynarr(int, int);
    ~dynarr();
    void setValue(int, int, int);
    int getValue(int, int);
    void allocate(int, int);
};