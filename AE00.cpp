#include <utility>
#include <vector>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    vector<int,int> m1;
    cin>>n;
    for(int i=1;i<=n;i++)
            for(int j=1;i*j<=n;j++)
            {
                    typedef pair <int, int> Map_Int_Pair;
                    m1.insert ( Map_Int_Pair (  min(i,j),max(i,j)) );
                    
            }
    vector <int, int>::iterator m1_Iter;
    for ( m1_Iter = m1.begin( ); m1_Iter != m1.end( ); m1_Iter++ )
      cout << " ( " << m1_Iter -> first << ", "<< m1_Iter -> second << " )";
    cout<<m1.size();
    cin>>n;
    return 0;
}
