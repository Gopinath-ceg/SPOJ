#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,n,k,*a,c=0;
	cin>>n>>k;
	a=new int[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n;i++)
		if(a[i+j]
