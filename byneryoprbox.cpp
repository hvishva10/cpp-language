#include<iostream>
using namespace std;
class box
{
    int l,b,h;
    public:
    void setdata(int x,int y, int z)
    {
        l=x, b=y, h=z;
    }
    int getdata()
    {
        return l*b*h;
    }
    box operator +(box &n)
    {
       box t;
       t.l=l+n.l;
       t.b=b+n.b;
       t.h=h+n.h;
       return t;
    }
};
int main()
{
    box a,b,c;
    a.setdata(2,3,4);
    cout<<"box a is:"<<a.getdata()<<endl;
    b.setdata(4,5,6);
    cout<<"box b is:"<<b.getdata()<<endl;
    c=a+b;
    cout<<"box c is:"<<c.getdata()<<endl;
}