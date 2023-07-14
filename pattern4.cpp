#include<iostream>
using namespace std;
int main()
{
   int i, j, rows;
    cout<<"Enter the number of rows\n";
    cin>>rows;
 
    for (i = 0; i < rows; i++)
     {
        for (j = 0; j < i; j++)
         {
            cout<<" ";
         }
        for (j = 0;j < 2*(rows-i)-1; j++)
         {
            cout<<"*";
         }
        cout<<"\n";
    }
    
}