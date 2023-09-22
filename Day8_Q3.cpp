#include<iostream>
using namespace std;

void print(char p[]);

bool strcomp(char s1[], char s2[])
{
     int i=0;
     bool b1 = true;
     
     while(s1[i]!='\0')
     {
     	if(s1[i] != s2[i])
     	{
     		b1=false;
     		break;
     	}
     	
     	i++;
     }
     return b1;
          
}

void print(char p[])
{
     int i=0;

     while(p[i]!='\0')
     {
     	cout << p[i];
     	i++;
     }
	
}

int main()
{
	bool b;
	char str1[] = "Hello";
	char str2[] = "World";
	
	b = strcomp(str1,str2);
	
	if(b)
	cout << "True" << endl;
	
	else
	cout << "False" << endl;
	
	return 0;
}
