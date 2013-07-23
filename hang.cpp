#include<iostream>
using namespace std;
int main()
{
	float a,sum,n;
	cin>>a;
	while(a)
	{
		sum=0.0;
		n=2.0;
		while(sum<a)
		{
			sum+=1/n;
			n=n+1;
		}
		cout<<(int)n-2<<" card(s)"<<endl;
		cin>>a;
	}
	return 0;
}
	
