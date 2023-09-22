#include<iostream>
using namespace std;

int main()
{
   int i, num[8] = {8,4,3,2,9,6,5,7}, small, ssmall;
   small = num[0];
   for(i=0; i<8; i++)
   {
      if(small>num[i])
         small = num[i];
   }
   ssmall = num[0];
   for(i=0; i<8; i++)
   {
      if(ssmall>num[i])
      {
         if(num[i]!=small)
            ssmall = num[i];
      }
   }
   cout<<"Second smallest element = "<<ssmall;
   cout<<endl;
   return 0;
}