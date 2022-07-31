#include<iostream>
using namespace std;

int main()
{
	long int ctrl, n=0, sum=0;
	cin>>n;
	long int vector[n];
	for(ctrl=0;ctrl<n;ctrl++)
	{
		cin>>vector[ctrl];
	}
	for(ctrl=0;ctrl<n;ctrl++)
	{
		sum=sum+vector[ctrl];
	}
	cout<<sum;
}
