#include<iostream>
using namespace std;

int main()
{
	
	int i,j,n,count=0;
	
	cout << "enter a number: ";
	cin >> n;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-count;j++)
		{
			cout << "*";
		}
		count++;
		cout << endl;
	}
	
	return 0;
}
