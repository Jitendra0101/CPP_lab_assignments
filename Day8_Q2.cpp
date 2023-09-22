#include<iostream>
using namespace std;

void print(char p[]);

void StrCpy(char d[], char s[])
{
     int i=0;
     //cout << "value at d3: " << d[3] << endl;  
     while(s[i]!='\0')
     {
     	d[i] = s[i];
     	i++;
     }
    // cout << "value at d3: " << d[3] << endl;
     cout << "after copy --" << endl;
     cout << "at source: ";
     print(s);
     
     cout << endl << "at destination: ";
     print(d);
     cout << endl;
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
	int length,m=0;
	char src[] = "CDAC-Pune";
	char dest[10];
	char ch=00;
	
	while(int m =!10)
	{ 
	   dest[m]=ch;
	   m++;
	}
	
	cout << "before copy -- " << endl << "at source : ";
	print(src);
	
	cout << endl << "at destination: ";
	print(dest); 
	cout << endl << endl;
	StrCpy(dest,src);
	
	return 0;
}
