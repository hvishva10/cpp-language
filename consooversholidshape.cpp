#include<iostream>
using namespace std;
class sholidshape
{
   public:
   sholidshape()
   {
     cout<<"defult constructor is called:"<<endl;
   }
    sholidshape(int a)
   {
     cout<<"qube is:"<<a*a*a<<endl;
   }
    sholidshape(double r)
   {
     cout<<"sphere is:"<<4/3*3.14*r*r*r<<endl;
   }
    sholidshape(int l, int b, int h)
   {
     cout<<"cuboid is:"<<l*b*h<<endl;
   }
    sholidshape(double l, double w,double h)
   {
     cout<<"pyramid is:"<<l*w*h/3<<endl;
   }
};
int main()
{ 
   sholidshape s,a(3),b(3.4),c(2,4,6),d(2.1,3.1,4.1);
   
}