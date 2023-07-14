#include<iostream>
using namespace std;
int main()
{
    int a=5,b=a;
    while(a>=1)
    {
        b=a;
        while(b<=5)
        {
            cout<<""<<b;
            b++;
        }
        cout<<"\n";
        a--;
    }
}