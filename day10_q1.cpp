#include<iostream>
using namespace std;

class BigInt
{
    int num;


    public:

    BigInt(int n):num(n){}

    int operator+(BigInt obj)
    {
        return num+obj.num; 
    }

    int operator-(BigInt obj)
    {
        return num-obj.num; 
    }

    int operator*(BigInt obj)
    {
        return num*obj.num; 
    }

    int operator/(BigInt obj)
    {
        return num/obj.num; 
    }


};

int main()
{
    BigInt obj1(10);
    BigInt obj2(2);

    int sum, mul, diff, div;

    sum = obj1+obj2;
    diff = obj1-obj2;
    mul = obj1*obj2;
    div = obj1/obj2;

    cout << "sum of the objects is: " << sum << endl;
    
    cout << "difference of the objects is: " << diff << endl;
    
    cout << "multiplication of the objects is: " << mul << endl;
    
    cout << "division of the objects is: " << div << endl;

    return 0;

}