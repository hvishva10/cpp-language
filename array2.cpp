#include<iostream>
using namespace std;
int main()
{
    int ary[10],num,odd_sum=0,even_sum=0;
    cout<<"enter value of num \n";
    cin>>num;
    for(int i=0; i<10; i++)
    {
        if(i%2==0)
        {
            even_sum=even_sum+1;
            cout<<"even num="<<i;
            cout<<"\n";
        }
        else
        {
            odd_sum=odd_sum+1;
            cout<<"odd num="<<i;
        }
    }  
    cout<<"sum of all odd num=\n"<<odd_sum;
    cout<<"sum of all even num=\n"<<even_sum;
}