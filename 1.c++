#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,temp=0,r;
	cout<<"enter number";
	cin>>n;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	cout<<"armstrong number";
	else
	cout<<"not armstrong number";
}
