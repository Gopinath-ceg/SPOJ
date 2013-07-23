#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,a,d,c,b,i,m1,m2;
	cin>>t;
	while(t-- )
	{
		cin>>a>>d;
		m1=0;
		for(i=0;i<a;i++)
		{
			cin>>b;
			if(b>m1)
				m1=b;
		}	
		m2=0;
		for(i=0;i<d;i++)
		{
			cin>>c;
			if(c>m2)
				m2=c;
		}
		if(m1>=m2)
			cout<<"Godzilla"<<endl;
		else
			cout<<"MechaGodzilla"<<endl;
	}
	return 0;
}	
