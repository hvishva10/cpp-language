#include<iostream>
using namespace std;
class square
{
    protected:
    int n;
    public:
    void hello()
    {
        cout<<"enter n value:";
        cin>>n;
    }
};
class dervied:public square
{
    public:
    int i;
    void test()
    {
       for(i=0; i<=n; i++)
       {
         cout<<"\t"<<i*i<<endl;
       } 
    }
};
int main()
{
    dervied d;
    d.hello();
    d.test();
}