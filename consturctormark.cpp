#include<iostream>
using namespace std;
class mark
{
    int maths,english,gujrati,total,per;
    public:
    mark()
    {
        cout<<"enter english marks:";
        cin>>english;
        cout<<"enter maths mark:";
        cin>>maths;
        cout<<"enter gujrati marks:";
        cin>>gujrati;
        total=maths+english+gujrati;
        cout<<"total:"<<total<<endl;
        per=total*100/300;
        cout<<"per:"<<per<<endl;
    }
    mark(int m)
    {
        cout<<"english marks:"<<english<<endl;
        cout<<"maths mark:"<<maths<<endl;
        cout<<"gujrati marks:"<<gujrati<<endl;
        cout<<"total:"<<total<<endl;
        cout<<"percentage:"<<per<<endl;
    }

};
int main()
{
    mark m;
}