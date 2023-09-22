#include<iostream>
using namespace std;

class Bigint
{
    int num;

    public:



        Bigint(){

            cout << "parameterless" << endl;
            this->num = 10;
        }

        Bigint(int n)
        {
            this->num = n;
            cout << "parameterized" << endl; 
        }

        bool operator==(Bigint obj2)
        {
            if(this->num == obj2.num) return true;
            else return false;
        }

        bool operator<=(Bigint obj2)
        {
            if(this->num <= obj2.num) return true;
            else return false;
        }
};

int main()
{
    // int n1;
    int n2;
    // cout << "enter obj1 and obj2: ";
    cout << "enter obj2: ";
    // cin >> n1;
    cin >> n2;
    Bigint obj1;
    Bigint obj2(n2);

    if(obj1==obj2)
    {
        cout << "Equal" << endl;
    }
    else
    cout << "Not Equal" << endl;

     if(obj1<=obj2)
    {
        cout << "obj1 is less then or equal to obj2" << endl;
    }
    else
    cout << "obj1 is NOT less than or Equal to obj2" << endl;

    return 0;
}