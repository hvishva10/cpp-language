#include<iostream>
using namespace std;
int fibonacci(int n)
{
  if(n < 2)
   {
      return n;
   }

  return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
   int num;
   cout<<"Number of terms to print in a Fibonacci series";
   cin>>num;

   for(int i = 0; i < num; i++) {
       cout<<"  "<<fibonacci(i);
   }
    
}
