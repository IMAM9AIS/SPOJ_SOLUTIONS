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
	int n;
	s(n);
	int g=1;int pre;
	rep(i,n)
	{
		int a;
		s(a);
		v.pb(a);
		if(i==0){
			pre=a;
		}
		else
		{
			int dif=a-pre;
			if(i==1)
				g=dif;
			else
				g=__gcd(dif,g);		
		}
	}
	//cout<<g<<endl;
	ll ans=0;
	//g=1;
	rep(i,n-1)
	{
		int a=v[i];
		int b=v[i+1];
		int dif=b-a;
		ans=ans+ (dif/g-1);	
	//	cout<<ans<<endl;
	}
	cout<<ans<<endl;
}
		
