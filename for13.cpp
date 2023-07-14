#include<iostream>
using namespace std;
int main()
{
    int a,n,sum=0;
    cout<<"enter n value:";
    cin>>n;
    for(a=0; a<=n; a+=2)
    {
    sum+=a;
    cout<<"\n"<<a;
    }
    cout<<"\n sum is:"<<sum;
}