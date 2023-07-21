#include<iostream>
using namespace std;
class area
{
   public:
   int test(int r)
   {
     return 3.14*r*r;
   }
   double test(double l)
   {
     return l*l;
   }
   int test(int l,int b)
   {
     return l*b;
   }
   double test(double h,double b)
   {
     return h*b/12;
   }
};
int main()
{
    area a;
  cout<<"circle is:"<<a.test(4)<<endl;
  cout<<"squire is:"<<a.test(5.2)<<endl;
  cout<<"rectangle is:"<<a.test(5,2)<<endl;
  cout<<"triangle is:"<<a.test(5.2,3.1)<<endl;
}