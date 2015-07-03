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
#define pp pair<string,int> 
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
typedef long long ll;
using namespace std;
int visited[99000];
string find(int n)
{
	
	mem(visited,0);
	queue<pp> q;
	if(n==1)
		return "1";
	else
		q.push(pp("1",1));
	
	visited[1]=1;
	while(!q.empty())
	{
		string s=q.front().first;
		int val=q.front().second;
		if(val==0)
			return s;
		else
		{
			int n1=val*10;
			int rem=n1%n;
			if(!visited[rem])
			{
				q.push(pp(s+"0",rem));
				visited[rem]=1;
			}
			int n2=val*10+1;
			 rem=n2%n;
			if(!visited[rem])
			{
				q.push(pp(s+"1",rem));
				visited[rem]=1;
			}
		}
		q.pop();
	}
}

	
int main()
{
	int t;
	s(t);
	while(t--)
	{
		int n;
		s(n);
		string s=find(n);
		cout<<s<<endl;
	}
}

