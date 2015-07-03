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
#define INF 99999999
#define VP vector<pp> 
#define QP queue<pp>
typedef long long ll;
using namespace std;
VP v[100009];
ll d[100009];
vector<pp1> edge;
int ans;
int l;
void cal(int s,int n)
{

		for(int i=1;i<=n;i++)
		{
				d[i]=INF;
		}

		set<pp> st;
		st.insert(pp(0,s));d[s]=0;
		int k=1;
		while(st.size()!=0)
		{
				int point=st.begin()->second;
				int dist=st.begin()->first;
				st.erase(pp(dist,point));

				for(int i=0;i<v[point].size();i++)
				{
						int to=v[point][i].first;
						int add=v[point][i].second;
						if(add+dist<d[to])
						{
								st.erase(pp(d[to],to));
								st.insert(pp(add+dist,to));
								d[to]=(ll)add+dist;
						}
				}

		}



}



int main()
{
		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif

 		int n,m,s;
 		s(n);s(m);s(s);
 		rep(i,m)
 		{
 				int u,v1,d;
 				s(u);s(v1);s(d);
 				v[u].pb(pp(v1,d));
 				v[v1].pb(pp(u,d));
 				edge.pb(pp1(u,pp(v1,d)));

 		}
 		ans=0;
 		s(l);
 		cal(s,n);
 		for(int i=1;i<=n;i++)
 				if(d[i]==l)
 						ans++;

 		for(int i=0;i<m;i++)
 		{
 			int s=edge[i].first;
 			int d1=edge[i].second.first;
 			int val=edge[i].second.second;
 			int point=-1;
 			//case1
 			if(d[d1]<l)
 			{
 					int x=l-d[d1];
 					if(x<val)
 					{
 							int y=val-x;
 							if(d[s]+y>=l){
 									ans++;
 									point=l+d[d1];
 									//cout<<s<<" "<<d1<<"f"<<endl;
 								}
 					}
 			}

 			if(d[s]<l)
 			{
 					int x=l-d[s];
 					if(x<val)
 					{
 							int y=val-x;
 							if(d[d1]+y>l){
 									ans++;
 								

 								}
 							}

 					}
 			}
 		
 		
 		cout<<ans<<endl;
 }