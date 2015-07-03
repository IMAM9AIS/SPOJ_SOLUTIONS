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
	int t;
	s(t);
	while(t--)
	{
		int n;
		s(n);
		int ar[n+1][n+1];
		rep(i,n){
			rep(j,n)
			{	int k;s(k);
				ar[i][j]=k;
			}
		}
		VP re;
		int done[n+1][n+1];
		mem(done,0);
		rep(i,n)
		{
			rep(j,n)
			{
				int y=1;
				if(i!=j)
				{
				
				rep(k,n)
				{		
					if(i!=j && i!=k && j!=k)
					{
						if(ar[i][j]==ar[i][k]+ar[k][j])
						{
							y=0;
							break;
						}
					}
				}
				if(y && !done[min(i,j)+1][max(i,j)+1])
				{	re.pb(pp(min(i,j)+1,max(i,j)+1));
					done[min(i,j)+1][max(i,j)+1]=1;
				}
				}		
			}
		}
		SORT(re);
		rep(i,re.size())
		{
			printf("%d %d\n",re[i].first,re[i].second);
		}
		printf("\n");
	}
}
