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
vector<ll> v;
int main()
{
	int t;	
	s(t);
	while(t--)
	{
		int n,k;
		s(n);s(k);
		
		
			rep(i,n)
			{
				ll a;sll(a);
				v.pb(a);
			}
			if(k==1)
				printf("0\n");
		else
		{
			SORT(v);
			int pos1=0;int pos2=k-1;ll mindif=1000000000;
			while(pos2<n)
			{
					ll dif=v[pos2]-v[pos1];
				//	cout<<dif<<endl;
					if(dif<mindif)
						mindif=dif;
					pos2++;
					pos1++;
			}
			printf("%lld\n",mindif);
			
		}
		v.clear();
			
	
	}
}
