#include <iostream>
using namespace std;
 int main()
 {
    int no, i,j,k;
    cout<<"enter the number:";
    cin>>no;
    for(i=0; i<no; i++)
    {
        for(j=0; j<=no; j++)
        {
           cout<<"";
        }
        for(k=1; k<=i; k++)
        {
           cout<<"*";
        }
        cout<<"\n";
    }
 }