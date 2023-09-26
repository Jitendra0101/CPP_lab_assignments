#include<iostream>
using namespace std;
int temp = -1;

class Array
{
    int * data;
    const int size;

    public:

    Array(int n):size(n)
    {
        data = (int *) malloc(sizeof(int) * n);
    }

    int &operator[](int i)
    {
        if((i < 0) || (i >= size))
        {
            return temp;
        }
        return data[i];
    }
};

void f1(Array obj)
{
    obj[0] = 1;
}

int main()
{
    Array arr1(5);
    f1(arr1);
    Array arr2(arr1);
    arr1[0] = 1;
    arr1[1] = 2;

    cout << arr1[0] << endl;
    cout << arr1[1] << endl;

    return 0;
}