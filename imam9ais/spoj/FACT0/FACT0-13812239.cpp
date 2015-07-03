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
		long long int n;
		sll(n);
		if(!n)break;
		vector<long long int> v1;
		vector<int> v2;
		for(long long int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				int c=0;
				while(n%i==0)
				{
					n=n/i;
					c++;
				}
//				cout<<"p"<<i<<" "<<endl;
				v1.pb(i);
				v2.pb(c);
			}
		}
//		cout<<n<<endl;
		if(n>1){
			v1.pb(n);
			v2.pb(1);
		}
		
		
		rep(i,sz(v1))
		{
			long long int a=v1[i];
			int b=v2[i];
			printf("%lld^%d ",a,b);
		
		}
		printf("\n");
	}
}

