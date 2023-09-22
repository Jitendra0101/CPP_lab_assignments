#include<iostream>
using namespace std;

int main()
{
    int fact, num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<endl;

    for(int i=1; i<=num; i++)
    {
      fact = num%i;
      if(fact==0)
        cout<<i<<" ";
    }
    // cout<<num;

    return 0;
}