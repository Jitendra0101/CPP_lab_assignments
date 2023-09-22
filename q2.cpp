#include<iostream>
using namespace std;

class date{

       int day;
       int month;
       int year;
       
       
       public:
      
       date()
       {
       cout<<"Parameterless constructor "<<endl;
       this->day=0;
       this->month=0;
       this->year=0;
       }
       
       date(int d,int m,int y)
       {
        this->day=d;
        this->month=m;
        this->year=y;
       }
       
       void read()
       {
        cout<<"date in dd-mm-yyy format : "<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
       }
       
       void write(int d,int m,int y)
       {
      
        //cin>>this->day>>this->month>>this->year;
        this->day = d;
        this->month = m;
        this->year = y;
       }
       
       bool operator==(date obj2)
       {
         if(this->day==obj2.day && this->month==obj2.month && this->year==obj2.year)
         return true;
        
         else 
         return false;    
       } 
       
};


int main()
{
    int d,m,y;
    
     date obj1(20,9,2023);
     obj1.read();
     
     date obj2(21,9,2023);
     obj2.read();
  
     date obj3;
     obj3.read();
          
     /*cout<<"enter day month and year";
     cin>>d>>m>>y;
     */
    
    // obj3.write(d,m,y);
     //obj3.read();
     
     
     
     if(obj1==obj2)
     cout<<"both dates are same "<<endl;
     else 
     cout<<"both dates are diffrent "<<endl;  

return 0;
}

