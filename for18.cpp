#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,n,i;
    cout<<"enter the number:";
    cin>>n;
    for(i=3; i<=n; i++)
    {
        c=a+b;
        cout<<"\n"<<c;
        a=b;
        b=c;
    }
}