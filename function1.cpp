#include<iostream>
using namespace std;
int passOrFail()
 {
	int a;
	cout<<"enter a:";
	cin>>a;
	return a>=18;
}

int main()
{
	int a;
	a = passOrFail();
 	cout<<"ans: \n"<<a;
}