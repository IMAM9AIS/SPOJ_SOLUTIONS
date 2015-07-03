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
int main()
{
	while(1)
	{
		int n;		
		s(n);
		if(!n)break;
		VP v;
		rep(i,n)
		{
			int x,y;s(x);s(y);
			v.pb(pp(x,y));
		}
		int c=0;
		map<double,int> mp;
		rep(i,n)
		{
			FOR(j,i+1,n)
			{
				int x1=v[i].first;
				int y1=v[i].second;
				int x2=v[j].first;
				int y2=v[j].second;
				double m;
				if(x2-x1!=0)
					 m=(double)(y2-y1)/(double)(x2-x1);	
				else
					m=INF;
				if(mp[m]!=1)
				{
					mp[m]=1;
					c++;
				}
			}
		}
		cout<<c<<endl;
	}
}
