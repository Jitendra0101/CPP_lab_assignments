#include <iostream>

int main() 
{
  int num,temp,b=0,a;
  std::cout<<"enter the number: ";
  std::cin>>num;
  
  temp=num;
  
  while(num>0)
  {
    a=num%10;
    b=b*10+a;
    num=num/10;
  }
  std::cout<<"\n"<<b;
  if(temp==b)
  std::cout<<"\nPalindrome";
  else
  std::cout<<"\nNot a palindrome";
    return 0;
}