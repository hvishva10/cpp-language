#include<iostream>
using namespace std;
class book
{
  private:
  int bookno;
  char booktitle[50];
  float price;
  float total_cost(int n)
  {
    return price*n;
  }
  public:
  void input()
  {
    cout<<"bookno:";
    cin>>bookno;
    cout<<"booktitle:";
    cin>>booktitle;
    cout<<"bookprice:";
    cin>>price;
  }
  void purchase()
  {
    int n;
    cout<<"enter the number of copies to be purchase:";
    cin>>n;
    float totalcost=total_cost(n);
    cout<<"total cost to paid:"<<totalcost<<endl;
  }
};
int main()
{
    book b;
    b.input();
    b.purchase();
}