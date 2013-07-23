#include<set>
#include<iostream>
typedef  std::pair<int, int> PairInt;
namespace std
{
  template<>
  bool operator < (const PairInt& l, const PairInt& r) 
  {
    if ( l.first != r.first )
       return l.first < r.first;
    else 
       return l.second < r.second; 
  }
}
int max(int a ,int b)
{
	if(a<b)
		return b;
	return a;
}
using namespace std;
int main()
{
    int i,j,n,x,y;
    set <PairInt> s;
    cin>>n;
    for(int i=1;i<=n;i++)
            for(int j=1;i*j<=n;j++)
		    s.insert(PairInt(max(i,j),min(i,j)));
    cout<<s.size();
    return 0;
}
