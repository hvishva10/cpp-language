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
    box operator  ++(int)
    {
       box t;
       t.l=l++;
       t.b=b++;
       t.h=h++;
       return t;
    }
};
int main()
{
    box a,b;
    a.setdata(2,3,4);
    cout<<"box a is:"<<a.getdata()<<endl;
    
    a++;
    b=a;
    cout<<"volume of box b is:"<<b.getdata()<<endl;
}