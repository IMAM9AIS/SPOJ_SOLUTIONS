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
#define INF 999999999999999
#define VP vector<pp> 
#define QP queue<pp>
#define pl pair<ll,ll>
typedef long long ll;
using namespace std;
vector<pp> edge;
VP v[400009];
ll dist[400009];
int parent[400009];
map<pp,pp> mp;
void djkstra(int start,int n)
{	
	//cout<<"st"<<endl;
		rep(i,n+5){
			dist[i]=INF;
			parent[i]=-1;
		}
		//ut<<dist[2]<<endl;
		set<pl> st;
		st.insert(pl(0,start));dist[start]=0;
		while(st.size()!=0)
		{
				ll d=st.begin()->first;
				int  point=st.begin()->second;
				st.erase(pl(d,point));
				
				for(int i=0;i<v[point].size();i++)
				{
						int to=v[point][i].first;
						int add=v[point][i].second;
						if(d+add<dist[to])
						{
							
								st.erase(pl(dist[to],to));
								st.insert(pl(d+add,to));
								dist[to]=d+add;
								parent[to]=point;
				//				cout<<"upda"<<to<<" "<<"dist is"<<dist[to]<<"d"<<d<<"add"<<add<<endl;
						}
						else if(d+add==dist[to])
						{
								int s1=min(parent[to],to);
								int d1=max(parent[to],to);
								int s2=min(to,point);
								int d2=max(to,point);
								if(mp[pp(s2,d2)].second<mp[pp(s1,d1)].second && mp[pp(s2,d2)]!=pp(0,0)) 
								{
									st.erase(pl(dist[to],to));
								st.insert(pl(d+add,to));
								dist[to]=d+add;
								parent[to]=point;
				//				cout<<"upda"<<to<<" "<<"dist is"<<dist[to]<<"d"<<d<<"add"<<add<<endl;

								}
						}
				}
		}

}
int value[400009];
VI ans;

int main()
{
		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif
    	int n,m;
    	s(n);
    	s(m);
    //	cout<<"done"<<endl;
    	rep(i,m)
    	{
    			int s,d,val;s(s);s(d);s(val);
    			//edge.pb(pp(min(s,d),max(s,d)));
    			mp[pp(min(s,d),max(s,d))]=pp(i+1,val);
    			v[s].pb(pp(d,val));
    			v[d].pb(pp(s,val));
    		
    	}
    //	cout<<"done"<<endl;
    	int st;
    	s(st);
    	djkstra(st,n);
    //	for(int i=1;i<=n;i++)
    //		cout<<dist[i]<<" ";
    //	cout<<endl;
    //	for(int i=1;i<=n;i++)
    //			cout<<parent[i]<< " ";
    //		cout<<endl<<endl;

    	ll ansv=0;
    	for(int i=1;i<=n;i++)
    	{
    			
				int t=parent[i];
				if(t!=-1)
				{
					pp ask=mp[pp(min(i,t),max(i,t))];
					ansv=ansv+ask.second;
					ans.pb(ask.first);
				}

				
    			
    	}

    	cout<<ansv<<endl;
    	SORT(ans);
    	rep(i,ans.size())
    		cout<<ans[i]<<" ";





}