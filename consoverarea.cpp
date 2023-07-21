#include<iostream>
using namespace std;
class area
{
   public:
   area()
   {
     cout<<"defult constructor is called..."<<endl;
   }
   area(int r)
   {
     cout<<"circle area is:"<<3.14*r*r<<endl;
   }
   area(double l)
   {
     cout<<"square area is:"<<l*l<<endl;
   }
   area(int l,int b)
   {
     cout<<"rectangle area is:"<<l*b<<endl;
   }
   area(double h,double b)
   {
     cout<<"triangle area is:"<<h*b/12<<endl;
   }
};
int main()
{
    area a,b(10),c(20.2),d(4,5),e(5.2,6.1);
}