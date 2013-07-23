#include<iostream>
using namespace std;
int main()
{
	int n;
	long long int h,w;
	cin>>n;
	while(n--)
	{
		cin>>h>>w;
		if(h==w && h%2)
			cout<<"R\n";
		else if(h==w && h==2)
			cout<<"L\n";
		else if(h==w)
			cout<<"U\n";
		else if(h>w && w%2==0)
			cout<<"U\n";
		else if(h>w)
			cout<<"D\n";
		else if(w>h && h%2==0 )
			cout<<"L\n";
		else
			cout<<"R\n";
	}
	return 0;
}
