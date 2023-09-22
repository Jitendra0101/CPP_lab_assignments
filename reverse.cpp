#include <iostream>

int main() 
{
    int num, digits,temp,a,count=0,b=0;
    std::cout<<"Enter the number\n";
    std::cin>>num;
    temp=num;
    
    while(num>0)
    {
      count++;
      num=num/10;
    }
    // std::cout<<count;
    for(int i=1;i<=count;i++)
    {
      a=temp%10;
      b=b*10+a;
      temp=temp/10;
      
      // std::cout<<temp;
    }
    std::cout<<b;
    
    
    
    return 0;
}