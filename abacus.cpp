#include<iostream>
using namespace std;
int main()
{
	int n,m,g,s;
	cin>>n;
	while(n--)
	{
		cin>>m>>g>>s;
		g--;
		while(g-m>=s)
			g-=m;
		if(g!=s)
			cout<<g-s+1<<endl;
		else
			cout<<"-1"<<endl;
	}
	return 0;
}
