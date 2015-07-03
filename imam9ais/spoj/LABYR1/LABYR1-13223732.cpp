#include<bits/stdc++.h>
using namespace std;
char ar[1001][1001];
int visited[1001][1001];
int dist[1001][1001];
int d[]={1,-1};
#define pp pair<int,int>
int maxx;
int maxy; 
int bfs(int r,int c,int rows,int col)
{
	queue<pp> q;
	dist[r][c]=0;
	q.push(pp(r,c));
	visited[r][c]=1;int max1=0;maxx=r;maxy=c;
	while(!q.empty())
	{
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(int i=0;i<=1;i++)
		{
			int a=x+d[i];
			if(a>=0 && a<rows)
			{
				if(ar[a][y]=='.' && !visited[a][y])
				{
				q.push(pp(a,y));
				dist[a][y]=dist[x][y]+1;
				if(dist[a][y]>max1)
				{
					maxx=a;maxy=y;
					max1=dist[a][y];
				}
				visited[a][y]=1;
				}
			}
		}
		for(int i=0;i<=1;i++)
		{
			int b=y+d[i];
			if(b>=0 && b<col)
			{
				if(ar[x][b]=='.' && !visited[x][b])
				{
					q.push(pp(x,b));
					dist[x][b]=dist[x][y]+1;
					if(dist[x][b]>max1)
					{
						max1=dist[x][b];
						maxx=x;maxy=b;
					}
					visited[x][b]=1;
				}
			}
		}
	}
	return max1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int r,c;
		scanf("%d %d",&c,&r);
		char s1[c];int sx=-1,sy=-1;
		for(int i=0;i<r;i++)
		{
			scanf("%s",s1);
			for(int j=0;j<c;j++){
				ar[i][j]=s1[j];
				if(s1[j]=='.')
				{	sx=i;sy=j;}
			}
		}
		bfs(sx,sy,r,c);
		memset(visited,0,sizeof visited);
		int maxdis=bfs(maxx,maxy,r,c);
		memset(visited,0,sizeof visited);
		printf("Maximum rope length is %d.\n",maxdis);		
	}
	return 0;
}

