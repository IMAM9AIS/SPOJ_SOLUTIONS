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
VI v;
map<int,int> mp;
VP vt;
priority_queue< pp,vector<pp>,less<pp> > pq;
vector<pp1> re;
int main()
{
	int n;
	s(n);
	rep(i,n)
	{
		int a;
		s(a);
		v.pb(a);
		mp[a]++;
	}
	rep(i,n)
	{
		int t=v[i];
		int c=mp[t];
		if(c!=0)
		{
			pq.push(pp(c,t));
			mp[t]=0;
		}
	}
	/**
	while(!pq.empty())
	{
		pp t=pq.top();
		cout<<t.first<<" "<<t.second<<endl;
		pq.pop();
	}
	*/
	//exit(0);
	if(pq.size()<=2)
	{
		printf("0\n");
	}
	else
	{
		int k=0;
		while(1)
		{
			pp p1=pq.top();pq.pop();pp p2=pq.top();pq.pop();pp p3=pq.top();pq.pop();
			int c1=p1.first;int v1=p1.second;
			int c2=p2.first;int v2=p2.second;
			int c3=p3.first;int v3=p3.second;
			//cout<<c1<<" "<<c2<<" "<<c3<<endl;
			if(c1==0||c2==0||c3==0)
				break;
			
			c1--;c2--;c3--;k++;
			VI st;st.pb(v1);st.pb(v2);st.pb(v3);
			SORT(st);re.pb(pp1(st[2],pp(st[1],st[0])));
			pq.push(pp(c1,v1));pq.push(pp(c2,v2));pq.push(pp(c3,v3));
		
				
		}
		int s=re.size();
		printf("%d\n",s);
		rep(i,s)
		{
			printf("%d %d %d\n",re[i].first,re[i].second.first,re[i].second.second);
		}

	}
}