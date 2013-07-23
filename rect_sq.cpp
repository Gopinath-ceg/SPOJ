#include<iostream>
using namespace std;
int main()
{
    int n;
    pair<int,int> s;
    cin>>n;
    for(int i=1;i<=n;i++) 
            for(int j=1;i*j<=n;j++)
                    s.insert(pair<int,int> (min(i,j),max(i,j)));
            cout<<s[1];
    cin>>n;
    return 0;
}
