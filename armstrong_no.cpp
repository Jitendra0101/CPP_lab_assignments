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
    b=b+(a*a*a);
    num=num/10;
  }
  if(b==temp)
  std::cout<<"\narmstrong number\n";
  else
  std::cout<<"\nnot an armstrong number\n";
//  std::cout<<"\n"<<b;
  
    return 0;
}
