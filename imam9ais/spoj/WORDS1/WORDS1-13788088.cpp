#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define FOR(i,k,n) for(int i=(k);i<=(int)(n);i++)
#define VI vector<int>
#define VS vector <string>
#define SORT(c) sort((c).begin(),(c).end())
#define pb push_back
#define gc getchar_unlocked
#define Q queue<int> 
#define s(n) scanf("%d",&n)  
#define sll(n) scanf("%lld",&n)
#define p(n) printf("%d",&n)
#define pll(n) printf("%lld",&n)
#define mem(s,v) memset(s,v,sizeof s) 
#define pp pair<int,int> 
#define pp1 pair<int,pair<int,int> > 
typedef long long ll;
using namespace std;
//vector<int> topo;
VI v[256];
//VI vt[256];
int visited[256];
void bfs1(int u)
{
	Q q;
	q.push(u);
	//memset(visited,0,sizeof visited);
	visited[u]=1;
	while(!q.empty())
	{
		int t=q.front();
//		cout<<(char)t<<" ";
		q.pop();
		rep(i,sz(v[t]))
		{
//			cout<<(char)v[t][i]<<" ";
			if(!visited[v[t][i]])
			{
				q.push(v[t][i]);
				visited[v[t][i]]=1;
			}
		}
//		cout<<endl;
	}
}
int main()
{
	int t;
	s(t);
	while(t--)
	{
		int in[256];
		int out[256];mem(in,0);mem(out,0);
		int n;s(n);memset(visited,0,sizeof visited);int start;
		rep(i,256)
			v[i].clear();
		while(n--)
	{
		string s;
		cin>>s;
		char st=s[0];
		char ed=s[s.length()-1];
		v[st].pb(ed);	
		v[ed].pb(st);
//		cout<<v[st][sz(v[st])-1]<<" "<<v[ed][sz(v[ed])-1]<<endl;
		in[ed]++;
		out[st]++;
		start=ed;
	}
	bfs1(start);
	int notpos=0;
	FOR(i,'a','z')
	{
		if(in[i]!=0 || out[i]!=0)
		{
			if(!visited[i])
			{
				//cout<<i<<endl;
				notpos=1;
				break;
			}
		}
	}
	
		
	
//	cout<<"d1"<<endl;
	int node=0;	
	FOR(i,'a','z'){
		if(in[i]!=0 || out[i]!=0)
			node++;
	}
//	cout<<"d2"<<endl;
	int mid,in1,out1,other1;
	mid=in1=out1=other1=0;
	FOR(i,'a','z')
	{
		if(in[i]==out[i] && in[i]!=0)
			mid++;
		else if(in[i]==out[i]-1)
			in1++;
		else if(out[i]==in[i]-1)
			out1++;
		else
			other1++;
	}
//	cout<<node<<" "<<mid<<" "<<in1<<" "<<out1<<endl;
	if(!notpos)
	{
		if(mid==node || (mid==node-2 && in1==1 && out1==1))
		cout<<"Ordering is possible."<<endl;
		else
		cout<<"The door cannot be opened."<<endl;
	}
	else
		cout<<"The door cannot be opened."<<endl;
	}
}
		
	
