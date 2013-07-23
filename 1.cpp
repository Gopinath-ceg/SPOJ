#include<iostream>
using namespace std;
int main()
{
	int i,k;
	for(int j=0;j<5;j++)
	{
		cin>>k;
		for(i = 0; (1LL<<i) < k; i++);
		cout<<i<<endl;
	}
	return 0;
}
