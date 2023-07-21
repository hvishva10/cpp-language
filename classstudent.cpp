#include<iostream>
using namespace std;
class student
{
    private:
    int adminNO;
    char sname[20];
    float english,maths,science,total;
    float ctotal()
    {
        return english+maths+science;
    }  
    public:
    void takedata()
    {
    cout<<"enter adminNO:";
    cin>>adminNO;
    cout<<"enter name:";
    cin>>sname;
    cout<<"enter english marks:";
    cin>>english;
    cout<<"enter science marks:";
    cin>>science;
    cout<<"enter maths marks:";
    cin>>maths;

    total=ctotal();
    }
    void showdata()
    {
        cout<<"adminno:"<<adminNO<<endl;
        cout<<"student name:"<<sname<<endl;
        cout<<"english mark:"<<english<<endl;
        cout<<"science mark:"<<science<<endl;
        cout<<"maths mark:"<<maths<<endl;
        cout<<"total marks:"<<total<<endl;
    }

};
int main()
{
    student s;
    s.takedata();
    s.showdata();
    
}