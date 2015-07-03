#include<bits/stdc++.h>
using namespace std;
char ar[1005][1005];
int visited[1005][1005];
int co;
void dfs(int x,int y,int ti)
{
//	cout<<x<<" "<<y<<endl;
	if(visited[x][y])
	{
		if(visited[x][y]==ti)
		{
		co++;
		}
		return ;
	}
	
	visited[x][y]=ti;
	char ch=ar[x][y];
	if(ch=='S')
		dfs(x+1,y,ti);
	if(ch=='N')
		dfs(x-1,y,ti);
	if(ch=='W')
		dfs(x,y-1,ti);
	if(ch=='E')
		dfs(x,y+1,ti);
}
	
int main()
{
	int r,c;
	scanf("%d %d",&r,&c);
	for(int i=0;i<r;i++)
	{
			char s[1005];scanf("%s",s);
		int l=strlen(s);
		for(int j=0;j<l;j++)
		{
			char ch=s[j];
			ar[i][j]=ch;
		}
	}
	co=0;int ti=1;
	memset(visited,0,sizeof visited);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
	
			if(!visited[i][j]){
				dfs(i,j,ti);
				ti++;
			}
		}
	}
	printf("%d\n",co);	
}
