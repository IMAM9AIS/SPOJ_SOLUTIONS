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
		VI v;
		rep(i,n)
		{
			int k;
			s(k);
			v.pb(k);
		}
		SORT(v);int ans=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int a=v[i];
				int b=v[j];
			//	cout<<a<<" "<<b<<endl;
				int sum=a+b;
				int num=upper_bound(v.begin(),v.end(),sum)-v.begin();
			///	cout<<num<<endl;
				ans=ans+n-num;
			}
		}
		printf("%d\n",ans);
	}
}

				
