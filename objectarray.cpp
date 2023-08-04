#include<iostream>
using namespace std;
class marksheet
{
    int m,e,g,total,per;
    public:
    void setdata()
    {
        cout<<"enter maths mark:";
        cin>>m;
        cout<<"enter english mark:";
        cin>>e;
        cout<<"enter gujrati marks:";
        cin>>g;
        total=m+e+g;
        cout<<"total is:"<<total;
        per=(total*100)/300;
        cout<<"per is:"<<per<<endl;
    }
    void getdata()
    {
     cout<<endl<<endl;   
      cout<<"enter maths mark:"<<m<<endl;
     cout<<"enter english mark:"<<e<<endl;
     cout<<"enter gujrati marks:"<<g<<endl;
     cout<<"total is:"<<total<<endl;
     cout<<"per is:"<<per<<endl;
    }
};
int main()
{
    marksheet a[5];
    for(int i=0; i<1; i++)
    {
       a[i].setdata();
       
       
    }    
        for(int i=0; i<1; i++)
    {
       
       a[i].getdata();
      
    }    

}

