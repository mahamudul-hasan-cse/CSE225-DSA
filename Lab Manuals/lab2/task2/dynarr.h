/*
Task 2: Modify the header and the source files. Add a member function void allocate(int s) which allows you to change the size of the array. 
Make sure that memory is not leaked.
*/

class dynarr
{
private:
    int *data;
    int size;

public:
    dynarr();
    dynarr(int);
    ~dynarr();
    void setValue(int, int);
    int getValue(int);
    void allocate(int s);
};