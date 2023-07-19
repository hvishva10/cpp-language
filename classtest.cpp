#include<iostream>
using namespace std;
class test
{
  private:
  int testcode,nocandidate,centerreqd;
  char description;
  int calcntr()
  {
    return (nocandidate/100+1);
  }
  public:
  void schedule()
  {
    cout<<"testcode:";
    cin>>testcode;
    cout<<"description:";
    cin>>description;
    cout<<"nocandidate:";
    cin>>nocandidate;
    centerreqd=calcntr();
  }
  void disptest()
  {
    cout<<"testcode:"<<testcode<<endl;
    cout<<"description:"<<description<<endl;
    cout<<"nocandidate:"<<nocandidate<<endl;
    cout<<"centerreqd:"<<centerreqd<<endl;
  }
};
int main()
{
    test t;
    t.schedule();
    t.disptest();
}