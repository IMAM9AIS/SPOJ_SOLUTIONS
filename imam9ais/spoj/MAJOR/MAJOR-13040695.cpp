#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int pos[1001];int neg[1001];memset(pos,0,sizeof(pos));
		memset(neg,0,sizeof(neg));
	//	cout<<neg[4]<<endl;
		int i;
		for(i=1;i<=n;i++)
		{
			int k;
			scanf("%d",&k);
			if(k>=0)
				pos[k]++;
			else
			{
				int t=(-1)*k;
				neg[t]++;
			}
		}
		int f=0;int r=n/2;
		for(i=0;i<1001;i++)
		{
			if(pos[i]>r)
			{
				f=1;cout<<"YES"<<" "<<i<<endl;
				break;
			}
			if(neg[i]>r)
			{
				f=1;cout<<"YES"<<" "<<"-"<<i<<endl;
				break;
			}
		}
		if(!f)
			cout<<"NO"<<endl;
	}
	return 0;
}

