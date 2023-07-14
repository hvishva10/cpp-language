#include<iostream>
using namespace std;
int main()
{
    int a,n;
    cout<<"enter n value:";
    cin>>n;
    for(a=1; a<=n; a++)
    {
        if(a%2==0)
        {
            cout<<"\t"<<a*a;
        }
        else
        {
            cout<<"\t"<<a;
        }
    }
    cout<<"\n";
}