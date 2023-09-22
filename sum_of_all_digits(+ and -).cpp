#include <iostream>

int main()
{
  int num,temp,b=0,a;
  std::cout<<"enter the number: ";
  std::cin>>num;

  if(num<0)
  {
    num=(num)*-1;
  }

  temp=num;

  while(num>0)
  {
    a=num%10;
    b=b+a;
    num=num/10;
  }

  std::cout<<"\n"<<b;

    return 0;
}