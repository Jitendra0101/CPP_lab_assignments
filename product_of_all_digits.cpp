#include <iostream>

int main() 
{
  int num,temp,b=1,a;
  std::cout<<"enter the number: ";
  std::cin>>num;
  
  temp=num;
  
  while(num>0)
  {
    a=num%10;
    b=b*a;
    num=num/10;
  }
  
  std::cout<<"\n"<<b;
  
    return 0;
}