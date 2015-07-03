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
int ar[66][10][10];
int dx[]={-1,1,2,-2};
int dy[]={-1,1,2,-2};
void dobfs(int sx,int sy)
{
	int place=8*(sx-1)+sy;
	queue<pp> q;
	q.push(pp(sx,sy));
	int visited[9][9];
	mem(visited,0);
	visited[sx][sy]=1;
	 ar[place][sx][sy]=0;
	while(!q.empty())
	{
		int tx=q.front().first;
		int ty=q.front().second;
		int pm=ar[place][tx][ty];
	//	cout<<tx<<" "<<ty<<endl;
		rep(i,4)
		{
			rep(j,4)
			{
				if(abs(dx[i])*abs(dy[j])==2)
				{
					int tox=tx+dx[i];
					int toy=ty+dy[j];
					//cout<<"t"<<" "<<tox<<" "<<toy<<endl;
					if(!visited[tox][toy] && tox>=1 && tox<=8 && toy>=1 && toy<=8)
					{
						visited[tox][toy]=1;
						ar[place][tox][toy]=pm+1;
						q.push(pp(tox,toy));
					}
				}
			}
		}
		q.pop();
	}
}

	
void bfs()
{
	for(int i=1;i<=8;i++)
	{
		for(int j=1;j<=8;j++)
		{
			dobfs(i,j);
		
		}

	
	}
	/**
	for(int place=1;place<=64;place++)
	{
		for(int i=1;i<=8;i++)
		{
			for(int j=1;j<=8;j++)
				cout<<ar[place][i][j]<<" ";
			cout<<endl;
		}
		cout<<endl<<endl;
	}
	*/

}

int main()
{
	int t;
	s(t);
	bfs();
	while(t--)
	{
		string st1,st2;
		cin>>st1>>st2;
		int sx=st1[0]-'a'+1;
		int sy=st1[1]-'0';
		int dx=st2[0]-'a'+1;
		int dy=st2[1]-'0';
		int place=8*(sx-1)+sy;
		int ans=ar[place][dx][dy];
		printf("%d\n",ans);
	}
}

