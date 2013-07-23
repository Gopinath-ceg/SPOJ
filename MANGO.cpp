#include<iostream>
using namespace std;
int main()
{
	int t;
	long long int n,i,n1,n2;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n2=n;
		n=n-2;
		if(n%2==0)
			n--;
		i=n*(n+1)/2;
		n1=n/2;
		i-=n1*(n1+1);
		cout<<i%n2<<endl;
	}
	return 0;
}
