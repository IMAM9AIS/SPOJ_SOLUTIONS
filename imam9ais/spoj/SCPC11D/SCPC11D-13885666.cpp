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
		int a,b,c;
		s(a);s(b);s(c);
		if(a==0&&b==0&&c==0)
			break;
		else
		{
			vector<int>v;v.pb(a);v.pb(b);v.pb(c);SORT(v);
			ll sum1=(ll)v[2]*v[2];
			ll sum2=(ll)v[1]*v[1]+(ll)v[0]*v[0];
			if(sum1==sum2)
				printf("right\n");
			else
				printf("wrong\n");
		}
	}
}

