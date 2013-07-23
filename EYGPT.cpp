#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	while(a!=0 && b!=0 && c!=0)
	{
		a*=a;
		b*=b;
		c*=c;
		if(a+b==c || a+c==b || b+c==a)
			cout<<"right"<<endl;
		else
			cout<<"wrong"<<endl;
		cin>>a>>b>>c;
	}
	return 0;
}

