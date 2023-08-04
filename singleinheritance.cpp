                     //single inheritance
#include<iostream>
using namespace std;
class base
{
    int a;
    protected:
    int b;
    public:
    void hello()
    {
        cout<<"hello..."<<endl;
    }
};
class dervied: public base
{
    public:
    void test()
    {
        base::b=10;
        cout<<"hello world.."<<endl;
        cout<<"b:"<<b<<endl;
    }
};
int main()
{
    dervied d;
    d.hello();
    d.test();
}                     