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
VI v;
int main()
{
		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif
		int n;
		s(n);
		rep(i,n)
		{
				int a;
				s(a);
				v.pb(a);
		}
		SORT(v);
		//rep(i,n)
			//ut<<v[i]<<" ";

		int pos1=n/2-1;
		int pos2=n-1;
		int ans=0;
		while(pos1>=0 && pos2>pos1)
		{
				if(v[pos1]*2<=v[pos2])
				{
						ans++;
						pos1--;
						pos2--;
						
				}
				else
				{
						pos1--;
				}
		}
		cout<<n-ans<<endl;
}