#include<iostream>
using namespace std;
int main()
{
   char a=65,b=65,c=65;
   while(a<=69)
   {
    b=65;
    while(b<=a)
    {
        cout<<c++;
        b++;
    }
    cout<<"\n";
    a++;
   }
}