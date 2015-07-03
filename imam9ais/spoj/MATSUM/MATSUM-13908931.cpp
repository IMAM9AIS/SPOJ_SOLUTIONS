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
int bit[4000][4000];
int n;
void update(ll x,ll y,ll num)
{
	while(x<=n+9)
	{
		ll y2=y;
		while(y2<=n+9)
		{
			bit[x][y2]+=num;
			y2+=(y2&(-y2));
		}
		x+=(x&(-x));
	}
}
ll query(ll x,ll y)
{
		ll sum=0;
		while(x)
		{
			ll y2=y;
			while(y2)
			{
				sum+=bit[x][y2];
				y2-=(y2&(-y2));
			}
			x-=(x&(-x));
		}
		return sum;
}
		

int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		//int n;
		scanf("%d\n",&n);
		mem(bit,0);
		while(1)
		{
			char s[10];
			scanf("%s",s);
			if(s[1]=='E')
			{
				ll x,y,num;
				scanf("%lld%lld%lld",&x,&y,&num);
				ll v1=query(x+1,y+1);
				ll v2=query(x+1,y);
				ll v3=query(x,y);
				ll v4=query(x,y+1);
			//	cout<<v1-v2-v4+v3<<endl;
				update(x+1,y+1,num-(v1-v2-v4+v3));
				//cout<<"done"<<endl;
			}
			else if(s[1]=='U')
			{
				ll x1,y1,x2,y2;
				scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
				ll v1=query(x2+1,y2+1);
				ll v2=query(x2+1,y1);
				ll v3=query(x1,y1);
				ll v4=query(x1,y2+1);
				printf("%lld\n",v1-v2-v4+v3);
			}	
		 	else 
				break;
		}
	}
}

