#include<iostream>
using namespace std;
void add(int x, int y)
{
	cout<<"\nAddition : "<<x+y;
}
int main()
{
	int a,b;
	cout<<"\nEnter teo numbers : ";
	cin>>a>>b;
	add(a,b);
	return 0;
}
