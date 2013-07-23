#include<iostream>
using namespace std;
int main()
{
	int t;
	long int r;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>r;
		cout<<"Case "<<i<<": "<<4*r*r+0.25<<endl;
	}
	return 0;
}
