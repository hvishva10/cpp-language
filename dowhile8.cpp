#include<iostream>
using namespace std;
int main()
{
    char a=1,b=1,c=65;
    while(a<=5)
    {
        while(b<=5)
        {
            if(b%2==1)
            {
                cout<<c+32;
            }
            else
            {
                cout<<c;
            }
            c++;
            b++;
        }
        a++;
        cout<<"\n";
    }
}