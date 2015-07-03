#include<bits/stdc++.h>
using namespace std;
vector<int> v[100005];
int deg[100005];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n-1;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		v[a].push_back(b);v[b].push_back(a);
		deg[a]++;
		deg[b]++;
	}
	queue<int> q;
	for(int i=1;i<=n;i++)
		if(deg[i]==1)
			q.push(i);
	int count=0;
	while(!q.empty())
	{
		int a=q.front();
		q.pop();
		if(deg[a]==1)
		{
			for(int i=0;i<v[a].size();i++)
			{
				int n1=v[a][i];
				if(deg[n1]!=0)
				{
					deg[n1]=0;
					for(int j=0;j<v[n1].size();j++)
					{
						int n2=v[n1][j];
						if(deg[n2]>0)
						{	deg[n2]--;
							if(deg[n2]==1)
								q.push(n2);
						}
					}
					count++;
				}
			}
		}
	}
	printf("%d\n",count);
}

