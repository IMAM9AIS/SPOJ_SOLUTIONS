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
#define pp pair<int,int > 
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
typedef long long ll;
using namespace std;
int visited[150];
int got=0;
int truestate[150];
VP v;
void dfs(int pos)
{
	//cout<<"at"<<pos<<endl;
	//cout<<"truestate"<<truestate[pos]<<endl;
	visited[pos]=1;
	int st=v[pos].first;
	int state=v[pos].second;
	//cout<<"here"<<st<<endl;
	if(truestate[pos]==0)
		state=1-state;
	//cout<<"state"<<state<<"st"<<st<<endl;
	
	if(!visited[st])
	{
		truestate[st]=state;
		dfs(st);
	}
	else
	{
		if(truestate[st]!=state){
			got=1;
			//cout<<"here"<<endl;
		//	cout<<"st "<<st<<"truestate "<<truestate[st]<<"state "<<state<<endl;

		}
	}
}

int main()
{
	while(1)
	{
		
		got=0;
		int n;
		s(n);
		if(!n)
			break;
		v.clear();
		v.pb(pp(0,0));
		rep(i,n)
		{
			int k;string s;
			s(k);cin>>s;
			if(s=="false")
				v.pb(pp(k,0));
			else
				v.pb(pp(k,1));		
		}
		for(int i=1;i<=n;i++)
		{
				rep(j,n+1)
				{
					truestate[j]=1;
					visited[j]=0;
				}
				
				dfs(i);
		
			if(got)
				break;
		}
		if(got)
			printf("PARADOX\n");
		else
			printf("NOT PARADOX\n");
		
	}
}

