#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);int tym=1;
	while(t--)
	{
		int tot,n;
		scanf("%d %d",&tot,&n);
		vector<int>v;int i;
		for(i=1;i<=n;i++)
		{	
			int k;scanf("%d",&k);
			v.push_back(k);
		}
		sort(v.begin(),v.end());
		int c=0,sum=0,pos=v.size()-1;
		while(pos>=0)
		{
			sum=sum+v[pos];
			c++;
			if(sum>=tot)
				break;
			pos--;
		}
		if(sum<tot)
		{	printf("Scenario #%d:\n",tym);
			printf("impossible\n");tym++;
		}
		else
		{
			printf("Scenario #%d:\n",tym);
			printf("%d\n",c);tym++;
		}	
		printf("\n");
	}
	return 0;
}

		
			
