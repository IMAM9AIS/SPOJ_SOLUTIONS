#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define FOR(i,k,n) for(int i=(k);i<(int)(n);i++)
#define VI vector<int>
#define VS vector <string>
#define SORT(c) sort((c).begin(),(c).end())
#define pb push_back
#define gc getchar_unlocked
#define Q queue<int> 
#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define p(n) printf("%d",n)
#define pll(n) printf("%lld",n)
#define mem(s,v) memset(s,v,sizeof s)
#define pp pair<int,int> 
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
typedef long long ll;
using namespace std;
VP v;
int main()
{
		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif
		int n;
			s(n);
    	rep(i,n)
    	{
    			int a,b;;
    			s(a);s(b);
    			v.pb(pp(a,b));
    	}
    	ll last=v[0].first;
    	int c=1;
    	for(int pos=1;pos<n;pos++)
    	{
    			if(pos==n-1)
    			{
    					c++;
    					break;
    			}
    			else if(v[pos].first-v[pos].second>last)
    			{
    					c++;
    					last=v[pos].first;

    			}
    			else if(v[pos].first+v[pos].second<v[pos+1].first)
    			{
    					c++;
    					last=v[pos].first+v[pos].second;
    			}
    			else
    			{
    					last=v[pos].first;
    			}
    	}
    	cout<<c<<endl;


}