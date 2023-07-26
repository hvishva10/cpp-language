#include<iostream>
using namespace std;
class test
{
    friend test value (test);
   int a,b;
   public:
   void setdata()
   {
    cout<<"enter a value:"<<endl;
    cin>>a;
    cout<<"enter b value:"<<endl;
    cin>>b;
   }
};
test value(test x)
{
    if(x.a>=x.b)
       cout<<"value a is min:"<<endl;
    else
       cout<<"value b is max:"<<endl;
}
int main()
{
    test x;
   x.setdata();
   value(x);
}