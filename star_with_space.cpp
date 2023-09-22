#include<iostream>
using namespace std;

int main()
{
	
	int a,b,c,count;

	cout << "enter the value of star pattern: ";
	cin >> count;
	cout << endl;
	for(int i=0;i<count;i++)
	{
		for(int j=0;j<count-i;j++)
		{
			cout<<" ";
		}
		
		for(int k=0;k<i+1;k++)
		{
			cout<<"*";
		}
		
		cout << endl;
	}

	return 0;
}
