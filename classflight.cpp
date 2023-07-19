#include<iostream>
using namespace std;
class flight
{
  private:
  int flightno;
  char destination[50];
  float distance,fuel;
  void calfuel()
  {
    if(distance<=1000)
    {
        fuel = 500;
    }
    else if(distance > 1000 && distance<=2000)
    {
        fuel = 1100;
    }
    else
    {
        fuel = 2200;
    }
  }
  public:
  void feedinfo()
  {
    cout<<"flightno:";
    cin>>flightno;
    cout<<"destination:";
    cin>>destination;
    cout<<"distance:";
    cin>>distance;

    calfuel();
  }
  void showinfo()
  {
    cout<<"flightno:"<<flightno<<endl;
    cout<<"destination:"<<destination<<endl;
    cout<<"distance:"<<distance<<"km"<<endl;
    cout<<"fuel:"<<fuel<<"litter"<<endl;
  }
};
 int main()
 {
 flight f;
 f.feedinfo();
 f.showinfo();
 }
 
