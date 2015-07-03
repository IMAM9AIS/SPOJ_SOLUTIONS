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
VP v;
int ar1[2009];
int ar2[2009];
int ar3[2009];
int main()
{
		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
    	#endif
    	int xa,ya,xb,yb;
    	cin>>xa>>ya>>xb>>yb;
    	for(int i=min(xa,xb);i<=max(xa,xb);i++)
    	{
    			for(int j=min(ya,yb);j<=max(ya,yb);j++)
    			{
    					if(i==xa|| i==xb || j==ya|| j==yb)
    							v.pb(pp(i,j));
    			}
    	}
    	//cout<<v.size()<<endl;
    	v.erase(unique(v.begin(),v.end()),v.end());
    	int c=0;
    	int n;s(n);
    	rep(i,n)
    	{
    			int x,y,r;
    			s(x);s(y);s(r);
    			ar1[i]=x;ar2[i]=y;ar3[i]=r;
    	}
    	for(int i=0;i<v.size();i++)
    	{
    			int x=v[i].first;
    			int y=v[i].second;int safe=0;
    			for(int j=0;j<n;j++)
    			{
    					int t1=ar1[j];
    					int t2=ar2[j];
    					int r=ar3[j];
    					if(((t1-x)*(t1-x)+(t2-y)*(t2-y))<= r*r)
    					{
    							safe=1;
    							break;
    					}
    			}
    			if(!safe)
    					c++;

    	}

    	printf("%d\n",c);
 }