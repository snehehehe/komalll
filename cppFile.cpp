#include<iostream>
using namespace std;
void add(int x, int y)
{
	cout<<"Addition : "<<x+y;
}
void multiply(int x, int y)
{
	cout<<"\nMultiplication : "<<x*y;
}
int main()
{
	int a ,b;
	cout<<"\nEnter two numbers : ";
	cin>>a>>b;
	add(a,b);
	multiply(a,b);
	return 0;
}
