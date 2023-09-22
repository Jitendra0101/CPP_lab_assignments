#include<iostream>
using namespace std;

int Strlen(char s[])
{
     int i=0;
     int count=0;
     while(s[i]!='\0')
     {
     	count++;
     	i++;
     }
     return count;
	
}


int main()
{
	int length;
	char arr[] = "jitendra";
	length = Strlen(arr);
	cout << "length of the array is: " << length << endl;
	
	return 0;
}
