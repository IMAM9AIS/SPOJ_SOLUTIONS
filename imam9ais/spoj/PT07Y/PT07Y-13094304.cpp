#include<bits/stdc++.h>
using namespace std;
struct edge
{
	int s;
	int d;
};
int find(int i, int parent[])
{
	if(parent[i]==-1)
		return i;
	else return(find(parent[i],parent));
}
void union1(int x,int y,int parent[])
{
	int x1=find(x,parent);
	int y1=find(y,parent);
	int a=min(x1,y1);
	int b=max(x1,y1);
	parent[a]=b;
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int parent[n+1];
	memset(parent,-1,sizeof(parent));
	
	int i;int t=1;
	struct edge e1[m+1];
	for(i=1;i<=m;i++)
	{
		int s1,d1;scanf("%d %d",&s1,&d1);
		e1[i].s=s1;e1[i].d=d1;
	}
	
	for(i=1;i<=m;i++)
	{
		int s,d;
		s=e1[i].s;
		d=e1[i].d;
		int x=find(s,parent);
		int y=find(d,parent);
		if(x==y)
		{
			t=0;
			break;
		}
		else
		{
			union1(x,y,parent);
		
		}
	}
	int c=0;
	for(i=1;i<=n;i++)
	{
		if(parent[i]==-1)
			c++;
	}
	if(c>1)
		t=0;
		
	if(t)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}

		
