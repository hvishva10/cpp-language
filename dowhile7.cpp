#include<iostream>
using namespace std;
int main()
{
    char    a=1,b=1,c=65,d=1;
    while(a<=5)
    {
        while(b<=a)
        {
            if(d%2==0)
            {
                cout<<""<<c+32;
            }
            else
            {
                cout<<""<<c;
            }
            c++;
            b++;
        }
        d++;
        cout<<"\n";
        a++;
    }
}