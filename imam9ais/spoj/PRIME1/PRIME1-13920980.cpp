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
	int t;s(t);while(t--){
		vector<int> prime;
	int n,m;s(n);s(m);
	int num=sqrt(m);
	int ar[num+1];memset(ar,0,sizeof(ar));
	int i;
	int limit=sqrt(num);
	for(i=2;i<=limit;i++){
		if(ar[i]==0){
		int t=i*i;int k=0;
		while(t<=num){
		ar[t]=1;k++;
		t=(i*i)+ k*i;
		}
		}
	}
	for(i=2;i<=num;i++){
	if(ar[i]==0)
		prime.push_back(i);}
	
	int sz=prime.size();int s=m-n+1;
	int re[s];memset(re,0,sizeof(re));
	for(i=0;i<sz;i++)
	{
		int t=prime[i];
		int te=n/t;
		int next=te*t;
		if(next<n)
			next=next+t;
		while(next<=m)
		{
			if(next!=t)
				re[next-n]=1;
			next=next+t;
		}
	}
	for(i=0;i<s;i++)
	{
		if(re[i]==0 && (n+i)!=1)
			printf("%d\n",n+i);
	}
	
	
	printf("\n");
	
	}
	return 0;

}

