#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    for(a=1; a<=10; a++)
    {
    sum=a+sum;
    cout<<"\n"<<a;
    }
    cout<<"\n sum is:"<<sum;
}