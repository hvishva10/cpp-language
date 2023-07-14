#include<iostream>
using namespace std;
int main()
{
    char a=1,b=a;
    while(a<=5)
    {
        b=a;
        while(b>=1)
        {
            cout<<b+64;
            b--;
        }
        cout<<"\n";
        a++;
    }

}