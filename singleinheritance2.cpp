#include<iostream>
using namespace std;
class factorialno
{
    protected:
    int n,fact=1;
    public:
    void hello()
    {
        cout<<"enter n value:";
        cin>>n;
    }
};
class dervied:public factorialno
{
    public:
    int i;
    void test()
    {  
       for(int i=n; i>1; i--)
       {
          fact=fact*i;
       }   
       cout<<"factorial is:"<<fact;
    }
};
int main()
{
    dervied d;
    d.hello();
    d.test();
}