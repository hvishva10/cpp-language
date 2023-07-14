#include<iostream>
using namespace std;
int main()
{
  int a=0,b=1,c,n;
  
  cout<<"enter terms:";
  cin>>n;

  for(int i=1; i<=n; i++)
    {
          if(i==1)
          {
                   cout<<""<<b;
          }
          else
          {
                    c=a+b;
                    cout<<""<<c;
                    a=b;
                    b=c;
          }
      }
       
  }