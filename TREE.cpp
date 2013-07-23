#include<iostream>
using namespace std;
int main()
{
	int n,m,a,b;
	cin>>n>>m;
	bool flag,s[10005]={false};
	flag=true;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		if(s[a] && s[b])
			flag=false;
		else
		{
			s[a]=true;
			s[b]=true;
		}
	}
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
