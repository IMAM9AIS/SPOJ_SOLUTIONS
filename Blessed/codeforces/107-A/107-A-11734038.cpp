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
#define endl '\n'
typedef long long ll;
using namespace std;
VP v[1009];
int start[1009];
int end[1009];
int mark[1009];
int k;
int count1=0;
pp ar[1009];
void dfs(int pos,int maxval,int minval)
{
		if(!start[pos] && end[pos])
		{
						ar[k].first=pos;
						ar[k].second=minval;
						mark[k]=1;
						count1++;
					
						return;
		}
		rep(i,sz(v[pos]))
		{
				int to=v[pos][i].first;
				int val=v[pos][i].second;

			
						minval=min(minval,val);
						//maxval=val;
						dfs(to,maxval,minval);
				

				
		}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);

		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif

    	int n,p;
    	cin>>n>>p;
    	rep(i,n+4)
    	{
    			start[i]=end[i]=0;
    			mark[i]=0;
    	}
    	rep(i,p)
    	{
    			int s,d,val;
    			cin>>s>>d>>val;
    			v[s].pb(pp(d,val));
    			start[s]++;
    			end[d]++;
    	}
    	for(int i=1;i<=n;i++)
    	{
    			if(start[i] && !end[i])
    			{
    					k=i;
    					int maxval=v[i][0].second;
    					dfs(i,maxval,9999999);
    			}
    	}
    	cout<<count1<<endl;
    	for(int i=1;i<=n;i++)
    	{
    			if(mark[i])
    			{
    					cout<<i<<" "<<ar[i].first<<" "<<ar[i].second<<endl;
    			}
    	}
}