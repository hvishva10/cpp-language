#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,c=1;
    while(a<=5)
    {
        b=1;
        while(b<=a)
        {
            cout<<""<<c%2==1;
            c++;
            b++;
        }
        cout<<"\n";
        a++;
    }
}