#include<iostream>
#include<map>
using namespace std;
int main()
{
	std::map<int,int> m;
	std::map<int,int>::iterator it;
	int n,a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		it=m.find(a);
		if(it==m.end())
			m.insert(std::pair<int,int>(a,1));
		else
			m.erase(it);
	}
	cout<<m.begin()->first<<endl;
	return 0;
}
