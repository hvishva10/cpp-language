#include<iostream>
using namespace std;
int main()
{  
    int i, j, rows;  
    cout<<" Enter a number of rows: \n ";  
    cin>>rows;   
    cout<<"\n";  
    for (i = rows; i > 0; i--) 
    {  
        for (j = i; j > 0; j--)   
        {  
            cout<<"* ";  
        }  
        cout<<"\n";   
    }       
}  