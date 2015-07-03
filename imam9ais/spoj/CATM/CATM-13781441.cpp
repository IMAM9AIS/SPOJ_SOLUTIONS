#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define rep1(i,k,n) for(int i=(k);i<(int)(n);i++)
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
pp parent[102][102];
int dx[]={1,-1,0};
int dy[]={1,-1,0};
int time1[102][102];
int n;
int m;
int time2[102][102];
int time3[102][102];
int isvalid(int x,int y)
{
	if(x>=0 && x<n && y>=0 && y<m)
		return 1;
	else
			return 0;
}

void bfs1(int x,int y)
{
	int visited[102][102];
	mem(visited,0);
	queue<pp1> q;
	q.push(pp1(0,pp(x,y)));
	parent[x][y]=pp(-1,-1);
	visited[x][y]=1;
	time1[x][y]=0;
	while(!q.empty())
	{
		int t=q.front().first;
		int x1=q.front().second.first;
		int y1=q.front().second.second;
	//	cout<<t<<" "<<x1<<" "<<y1<<endl;
		rep(i,3)
		{
			rep(j,3)
			{
				if(!(dx[i]&& dy[j])&& (dx[i]!=dy[j]))
				{
				//	cout<<dx[i]<<" "<<dy[j]<<endl;
					int xt=x1+dx[i];
					int yt=y1+dy[j];
					if(isvalid(xt,yt) && !visited[xt][yt])
					{
						q.push(pp1(t+1,pp(xt,yt)));
						visited[xt][yt]=1;
						parent[xt][yt]=pp(x1,y1);
						time1[xt][yt]=t+1;
					}
				}
			}
		}
		q.pop();
	}
	
}
void bfs2(int x,int y,int cas)
{
	int visited[102][102];
	mem(visited,0);
	queue<pp1> q;
	q.push(pp1(0,pp(x,y)));
	visited[x][y]=1;
	while(!q.empty())
	{
		int t=q.front().first;
		int xt=q.front().second.first;
		int yt=q.front().second.second;
		rep(i,3)
		{
			rep(j,3)
			{
				if(!(dx[i]&&dy[j]) && (dx[i]!=dy[j]))
				{
					int x1=xt+dx[i];int y1=yt+dy[j];
					if(isvalid(x1,y1) && !visited[x1][y1])
					{
						q.push(pp1(t+1,pp(x1,y1)));
						visited[x1][y1]=1;
						if(cas==1)
							time2[x1][y1]=t+1;
						else
							time3[x1][y1]=t+1;
					}
				}
			}
		}
		q.pop();
	}
		
	
}
int check()
{
	int ans=0;
	rep(i,4)
	{
		int t;if(i==0)t=m;if(i==1)t=n;if(i==2)t=m;if(i==3)t=n;
		rep(j,t)
		{
			int sx;int sy;
			if(i==0)
			{
			 sx=0;
			 sy=j;
			}
			if(i==1)
			{
				sx=j;sy=m-1;
			}
			if(i==2)	
			{	sx=n-1;sy=j;}
			if(i==3)
			{
				sx=j;sy=0;		
			}
	
			
		if((time1[sx][sy]==0))
			return 1;
		else if(time1[sx][sy]!=time2[sx][sy] && time1[sx][sy]!=time3[sx][sy])
		{	
			while(parent[sx][sy].first!=-1)
			{
				int s1=parent[sx][sy].first;
				int s2=parent[sx][sy].second;
				if((time1[s1][s2]==time2[s1][s2])||(time1[s1][s2]==time3[s1][s2]))
				{	ans=0;
					break;
				}
				sx=s1;sy=s2;
				if(parent[sx][sy].first==-1)
				{	//cout<<i<<" "<<j<<endl;
					return 1;
				}
			}
		}
		}
	}
	return ans;
}

	
int main()
{
	
	s(n);s(m);
	int k;
	s(k);
	while(k--)
	{
		int mx,my,c1x,c1y,c2x,c2y;
		s(mx);s(my);s(c1x);s(c1y);s(c2x);s(c2y);
		bfs1(mx-1,my-1);
//		cout<<endl;
		bfs2(c1x-1,c1y-1,1);
//		cout<<endl;
		bfs2(c2x-1,c2y-1,2);
		if((mx==c1x && my==c1y)||(mx==c2x&& my==c2y))
			cout<<"NO"<<endl;
		else
		{
		int a=check();
		if(a==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		}
		
	}
}

