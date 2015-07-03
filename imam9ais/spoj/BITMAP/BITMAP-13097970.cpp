#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x;
	int y;
};
int adj[200][200];
int re[200][200];
int n;
int m;
int d[]={1,-1};
queue<struct node>q;
void bfs()
{
	int visited[200][200];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{	if(re[i][j]!=0)
				visited[i][j]=0;		
			else
				visited[i][j]=1;
		}
	}
	while(!q.empty())
	{
		struct node a=q.front();
		q.pop();
		int posx=a.x;int posy=a.y;
		for(i=0;i<2;i++)
		{
			posx=a.x+d[i];
			if(!visited[posx][posy])
			{
				if(re[posx][posy]>re[a.x][a.y])
				{
					re[posx][posy]=re[a.x][a.y]+1;
					struct node p;
					p.x=posx;p.y=posy;
					q.push(p);
				}
				visited[posx][posy]=1;
			}
		}
		posx=a.x;posy=a.y;
		  for(i=0;i<2;i++)
                {
                        posy=a.y+d[i];
                        if(!visited[posx][posy])
                        {
                                if(re[posx][posy]>re[a.x][a.y])
                                {
                                        re[posx][posy]=re[a.x][a.y]+1;
                                        struct node p;
                                        p.x=posx;p.y=posy;
                                        q.push(p);
                                }
                                visited[posx][posy]=1;
                        }
                }
	}
}
	

	
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n1,m1;
		scanf("%d %d",&n1,&m1);
		n=n1;m=m1;
		int i,j;
		for(i=0;i<n;i++)	
		{
			string a;cin>>a;	int j;
			j=0;
			while(j<a.length())	
			{
				char ch=a[j];
				if(ch=='0')	
				{
					adj[i][j]=0;re[i][j]=INT_MAX;
				}
				else
				{
					adj[i][j]=1;re[i][j]=0;
					struct node p;p.x=i;p.y=j;q.push(p);
				}
				j++;
			}
		}
		bfs();
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",re[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

