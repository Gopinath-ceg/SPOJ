#include<iostream>
using namespace std;
int main()
{
	int n;
	long long int a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		cout<<a*(a+2)*(2*a+1)/8<<endl;
	}
	return 0;
}
