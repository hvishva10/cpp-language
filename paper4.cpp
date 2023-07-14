#include<iostream>
using namespace std;
int main()
{
    char a[30];
    int i,j,rev=0,same=0;
    cout<<"enter any name:";
    cin>>a;
    for(i=0; a[i]!='\0'; i++)
    {
        same=a[i];
    }
    for(j=i; j>=0; j--)
    {
        cout<<""<<a[j];
        rev=a[j];
    }
    if(same==rev)
    {
        cout<<"\n pelidrom";
    }
    else
    {
        cout<<"\n not pelidrom";
    }
    
}

