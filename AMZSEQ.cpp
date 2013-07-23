#include<iostream>
using namespace std;
#define a long long unsigned int
a f(a n)
{
	if(n==0)
		return 1;
	if(n==1)
		return 3;
	return(f(n-2)+f(n-1)*2);
}
int main()
{
	a b;
	cin>>b;
	cout<<f(b);
	return 0;
}
