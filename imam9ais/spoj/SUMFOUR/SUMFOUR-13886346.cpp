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
int ar1[4008];
int ar2[4008];
int ar3[4008];
int ar4[4008];
vector<int> v1;
vector<int> v2;
int hash1[9999999];
int hash2[9999999];
map<int,int> mp1;
map<int,int> mp2;
int main()
{
	int n;
	s(n);
	rep(i,n)
	{
		int a,b,c,d;
		s(a);s(b);s(c);s(d);
		ar1[i]=a;ar2[i]=b;ar3[i]=c;ar4[i]=d;
	}
	rep(i,n)
	{
		rep(j,n)
		{
			v1.pb(ar1[i]+ar2[j]);
			v2.pb(ar3[i]+ar4[j]);
			int sum=ar1[i]+ar2[j];
			if(sum<9999999 && sum>=0)
				hash1[sum]++;
			else if(sum>9999999)
				mp1[sum]++;
			sum=ar3[i]+ar4[j];
			if(sum<9999999 && sum>=0)
				hash2[sum]++;
			else if(sum>9999999)
				mp2[sum]++;	
		}
	}
	SORT(v1);
	SORT(v2);
	int ans=0;
	rep(i,n*n)
	{
		if(v1[i]>0)
			break;
		else
		{
			int a=v1[i];
			if(abs(a)<9999999)
				ans+=hash2[abs(a)];
			else
				ans+=mp2[abs(a)];
		}
	}
	rep(i,n*n)
	{
		//cout<<i<<" "<<v2[i]<<endl;
		if(v2[i]>=0)
			break;
		else
		{
			int a=v2[i];
			if(abs(a)<9999999)
				ans+=hash1[abs(a)];
			else
				ans+=mp1[abs(a)];
		}
	}
	printf("%d\n",ans);
}

			
			
