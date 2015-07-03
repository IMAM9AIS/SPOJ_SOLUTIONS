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
#define endl '\n'
typedef long long ll;
using namespace std;
VP v;
int  check(int x1,int y1,int x2,int y2,int x3,int y3)	
{
		ll area= x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
		if(area==0)
				return 0;
		else
				return 1;

}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);

		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif
		int n;
		cin>>n;
		rep(i,n)
		{
				int x,y;
				cin>>x>>y;
				v.pb(pp(x,y));

		}
		ll cnt=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
					for(int k=j+1;k<n;k++)
					{
							int x1=v[i].first;int y1=v[i].second;
							int x2=v[j].first;int y2=v[j].second;
							int x3=v[k].first;int y3=v[k].second;
							if(check(x1,y1,x2,y2,x3,y3)!=0)
								cnt++;
					}
			}
		}
		cout<<cnt<<endl;
}