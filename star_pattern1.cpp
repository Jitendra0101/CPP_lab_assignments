#include<iostream>
using namespace std;

int main()
{
	
	int i,j,n,count;
	
	cout << "enter the value of n: ";
	cin >> n;
	cout << endl;
	
	for (j=1;j<=n;j++)
	{
		for(i=0;i<j;i++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}