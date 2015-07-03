#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		printf("\n");
		int ng,nm;
		scanf("%d",&ng);
		scanf("%d",&nm);
		vector<int> g;vector<int> m;
		int i;
		for(i=1;i<=ng;i++)
		{
			int k;scanf("%d",&k);
			g.push_back(k);
		}
		 for(i=1;i<=nm;i++)
                {
                        int k;scanf("%d",&k);
                        m.push_back(k);
                }
		int j;i=0;j=0;sort(g.begin(),g.end());sort(m.begin(),m.end());
		while(ng!=0 && nm !=0)
		{
			if(g[i]<m[j])
			{	i++;ng--;}
			if(g[i]>=m[j])
			{	j++;nm--;}
		}
		if(nm==0)
			printf("Godzilla\n");
		if(ng==0)
			printf("MechaGodzilla\n");
	}
	return 0;
}

