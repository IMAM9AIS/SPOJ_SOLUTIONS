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
		int n,m;s(n);s(m);
		rep(i,m)
		{
				int a;
				s(a);
				v.pb(a);
		}
		int pos=1;
		int pt=0;ll time1=0;
		while(pt<m)
		{
				int t=v[pt];
				if(pos<=t)
				{
						time1=time1+(t-pos);
				}
				else
				{
						time1=time1+(n-pos)+ (t-1)+1;
				}
				pos=t;
				pt++;
		}
		cout<<time1<<endl;
}