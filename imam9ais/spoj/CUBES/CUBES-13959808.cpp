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
int visited[105][105][105];
int main()
{
	
	vector<int> v;
	for(int i=2;i<=100;i++)
	{
		v.pb(i*i*i);
	}
	for(int a=2;a<=100;a++)
	{
		for(int b=2;b<=100;b++)
		{
			for(int c=2;c<=100;c++)
			{
				int sum=a*a*a;
				sum=sum-b*b*b-c*c*c;
				int search=sum;
				int pos=lower_bound(v.begin(),v.end(),search)-v.begin();
				
			
				if(pos!=v.size() && v[pos]==search)
				{
					VI st;
					st.pb(b);st.pb(c);st.pb(pos+2);
					SORT(st);
					if(!visited[st[0]][st[1]][st[2]]){
					printf("Cube = %d, Triple = (%d,%d,%d)\n",a,st[0],st[1],st[2]);
					visited[st[0]][st[1]][st[2]]=1;
					}
					
				}
			}
		}
	}
}

				
