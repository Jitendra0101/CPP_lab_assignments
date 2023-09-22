#include <iostream>

int main() 
{
    int num, count=0, temp;
    std::cout<<"Enter the number\n";
    std::cin>>num;
    temp=num;
    while(num>0)
    {
      count++;
      num=num/10;
    }
    
    for(int i=0;i<count-1;i++)
    {
      temp=temp/10;
    }
    std::cout<<"first digit of the number is: "<<temp;

    return 0;
}