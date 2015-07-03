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
int ar[35000];
VI v[35000];
VI re;
void generate1()
{
	for(int i=2;i<=33900;i++)
                        v[0].pb(i);

	int k=2;
	for(int i=1;i<=3000;i++)
	{	
		re.pb(v[i-1][0]);
		k=v[i-1][0];
		int pos=0;
		pos=pos+k;
		while(pos<v[i-1].size())
		{
			
			v[i-1][pos]=-1;
			pos=pos+k;
		}
		for(int j=1;j<v[i-1].size();j++)
		{
			if(v[i-1][j]!=-1)
			{
				v[i].pb(v[i-1][j]);
			}
		}
		
	}
	

			
}
int main()
{

	generate1();
	while(1)
	{
		int n;
		s(n);if(!n)
				break;
		printf("%d\n",re[n-1]);
	}
}

	
