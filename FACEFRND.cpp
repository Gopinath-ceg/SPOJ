#include<cstdio>
#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n,c;
	cin>>n;
	std::set<int> S;
	std::set<int>::iterator it;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
		while(b[i]--)
		{
			cin>>c;
			S.insert(c);
		}
	}
	for(int i=0;i<n;i++)
		S.erase(a[i]);
	cout<<S.size(); 
}
