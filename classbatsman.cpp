#include<iostream>
using namespace std;
class batsman
{
  private:
  int bcode,innings,notout,runs,batavg;
  char bname[20];
  void calcavg()
  {
    batavg=runs/(innings-notout);
  }
  public:
  void readdata()
  {
    cout<<"bcode:";
    cin>>bcode;
    cout<<"enter name:";
    cin>>bname;
    cout<<"innings:";
    cin>>innings;
    cout<<"notout";
    cin>>notout;
    cout<<"runs";
    cin>>runs;
    calcavg();
  }
  void displaydata()
  {
    cout<<"bcode;"<<bcode<<endl;
    cout<<"enter name:"<<bname<<endl;
    cout<<"innings:"<<innings<<endl;
    cout<<"notout:"<<notout<<endl;
    cout<<"runs:"<<runs<<endl;
  }
};

int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
}