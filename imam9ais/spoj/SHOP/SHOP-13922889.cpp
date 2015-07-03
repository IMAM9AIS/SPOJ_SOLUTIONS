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
int r;
int c;
char ar[50][50];
int dis[50][50];
int dx[]={1,-1,0};
int dy[]={1,-1,0};
int isvalid(int x,int y)
{
	if(x<r && x>=0 && y>=0 && y<c && ar[x][y]!='S'&& ar[x][y]!='X')
		return 1;
	else
		return 0;
}
 
void djkstra(int si,int sj)
{
	priority_queue< pp1,vector<pp1>,greater<pp1> > pq;
//	cout<<endl;
//	cout<<si<<" "<<sj<<endl;
	pq.push(pp1(0,pp(si,sj)));int k=1;
	while(!pq.empty())
	{
	
		pp1 a=pq.top();
		pq.pop();
		int x=a.second.first;
		int y=a.second.second;
		if(a.first==dis[x][y])
		{	
			rep(i,3)
			{
				rep(j,3)
				{
				if(!(dx[i]&&dy[j]) && dx[i]!=dy[j])
				{
					int tx=x+dx[i];
					int ty=y+dy[j];
					if(isvalid(tx,ty))
					{
						
					
						if(dis[tx][ty]>dis[x][y]+(ar[tx][ty]-'0'))
						{
							if(ar[tx][ty]!='D')
							dis[tx][ty]=dis[x][y]+(ar[tx][ty]-'0');
							else
							dis[tx][ty]=dis[x][y];
				
							pq.push(pp1(dis[tx][ty],pp(tx,ty)));
						}
					}
				}
			}
		
			}
		}	
	}
	
	
}

		
int main()	
{
	while(1)
	{
		s(c);s(r);int si,sj;int di,dj;
		if(c==0 && r==0)
			break;
	rep(i,r)
	{
		string s;
		cin>>s;
		rep(j,c)
		{
			char ch=s[j];
			ar[i][j]=ch;
			if(ch=='S')
			{
				si=i;
				sj=j;
			}
			if(ch=='D')
			{
				di=i;
				dj=j;
			}
		}
	}
	rep(i,r)
		rep(j,c)
			dis[i][j]=INF;
	dis[si][sj]=0;
	djkstra(si,sj);
	int ans=dis[di][dj];
	printf("%d\n",ans);
	}
}

