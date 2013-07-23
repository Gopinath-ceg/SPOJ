#include<iostream>
using namespace std;
long long int fact(long long int a)
{
	if(a==1 || a==0)
		return 1;
	else
		return(a*fact(a-1));
}
int main()
{
	int t;
	long long int a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<fact(a)/(fact(a-b)*fact(b))<<endl;
	}
	return 0;
}	
