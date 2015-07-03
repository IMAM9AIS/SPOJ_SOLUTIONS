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
int ar[11];
		
				

int main()
{
	int done=0;
	rep(i,10)
	{
		int a;
		s(a);
		ar[i]=a;

	}
	int mindif=9999;
	int sum=0;
	int ans=-1;
	rep(i,10)
	{
			sum=sum+ar[i];
			if(abs(sum-100)<=mindif)
			{
				ans=sum;
				mindif=abs(sum-100);
			}
	}
	cout<<ans<<endl;
	
}

