#include <iostream>

int main() 
{
    int fact, num,a=0,j;
  for(num=1;num<8589869057;num++)
  {
  for(int i=1; i<num; i++)
    {
      fact = num%i;
      if(fact==0)
        a=a+i;
    }
    //std::cout<<"\n"<<a;
    if(a==num){
    std::cout<<"\nsol:"<<a<<"\n";
    }a=0;
}
    return 0;
}
