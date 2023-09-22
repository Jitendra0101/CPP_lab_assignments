#include <iostream>

int main() 
{
    int num1,num2,sum,terms;
    std::cout<<"Enter the two numbers";
    std::cin>>num1>>num2;
    terms=num2-num1+1;
    
    sum= (num1+num2)*terms/2;
    std::cout<<"\n"<<sum;

    return 0;
}