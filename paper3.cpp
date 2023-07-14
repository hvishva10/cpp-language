#include<iostream>
using namespace std;
 int main()
   { 
     int a[100],i,size, min,max;
       cout<<"enter the size of array:";
       cin>>size;
         for(i=0; i<size; i++)
         {
             cin>>a[i];
         }
          max=a[0];
          min=a[0];
         for(i=0; i<size; i++)
         {
            if(a[i]>max)
              {
                 max=a[i];
              }
            else
            if(a[i]<max)
              {
                min=a[i];
              }
          }
         cout<<"maximum value:\n"<<max;
         cout<<"minimum value:\n"<<min;        
    
   }