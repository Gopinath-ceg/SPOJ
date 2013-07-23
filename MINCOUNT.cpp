#include<iostream>
using namespace std;
int main()
{
	int t;
	long long unsigned int a;
	cin>>t;
	while(t--)
	{
		cin>>a;
		cout<<a*(a+1)/6;
	}
	return 0;
}
