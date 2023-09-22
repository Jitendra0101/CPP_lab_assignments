#include <iostream>

int main() 
{
    int fact, num,a=0;
    std::cout<<"Enter the number\n";
    std::cin>>num;
    
    for(int i=1; i<num; i++)
    {
      fact = num%i;
      if(fact==0)
        a=a+i;
    }
    if(a==num)
    std::cout<<"\nPerfect number";
    else
    std::cout<<"\nNot a perfect number";
    
    return 0;
}