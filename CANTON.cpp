#include<iostream>
using namespace std;
int main()
{
	int t,i,x,y;
	long long unsigned int n,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		a=1;
		for(i=1;(i*(i+1))/2<n;i++);
		i--;
			a=(i*(i+1))/2;
		b=n-a;
		if(i%2==1)
		{
			x=b;
			y=i-b+2;
		}
		else
		{
			y=b;
			x=i-b+2;
		}
		cout<<"TERM "<<n<<" IS "<<x<<'/'<<y<<endl;
	}
	return 0;
}
			
